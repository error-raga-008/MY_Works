from tkinter import *
from tkinter import messagebox, simpledialog
import sqlite3
from sqlite3 import Error
import hashlib
import sys

# Check for command-line arguments
if len(sys.argv) < 2:
    print("Usage: python your_script.py <master_password>")
    sys.exit(1)

# Store hashed master password
master_password = sys.argv[1]
hashed_master_password = hashlib.sha256(master_password.encode()).hexdigest()


# Function to connect to the SQL Database
def sql_connection():
    try:
        con = sqlite3.connect('passwordManager.db')
        return con
    except Error as e:
        print(f"Database connection failed: {e}")
        sys.exit(1)


# Function to create table
def sql_table(con):
    cursorObj = con.cursor()
    cursorObj.execute(
        "CREATE TABLE IF NOT EXISTS passwords(website TEXT, username TEXT, pass TEXT)"
    )
    con.commit()


# Connect to database and create table
con = sql_connection()
sql_table(con)


# Function to submit data to the database
def submit(con):
    cursor = con.cursor()
    if website.get() != "" and username.get() != "" and password.get() != "":
        try:
            cursor.execute(
                "INSERT INTO passwords (website, username, pass) VALUES (?, ?, ?)",
                (website.get(), username.get(), password.get())
            )
            con.commit()
            messagebox.showinfo("Info", "Record Added to Database!")

            # Clear text boxes
            website.delete(0, END)
            username.delete(0, END)
            password.delete(0, END)
        except Error as e:
            messagebox.showerror("Error", f"Database error: {e}")
    else:
        messagebox.showinfo("Alert", "Please fill in all details!")


# Function to query and display all records
def query(con):
    entered_password = simpledialog.askstring("Password", "Enter Master Password", show="*")
    if hashlib.sha256(entered_password.encode()).hexdigest() == hashed_master_password:
        query_btn.configure(text="Hide Records", command=hide)
        cursor = con.cursor()
        try:
            cursor.execute("SELECT *, oid FROM passwords")
            records = cursor.fetchall()

            # Format and display records
            p_records = f"{'ID':<10}{'Website':<40}{'Username':<30}{'Password':<30}\n"
            for record in records:
                p_records += f"{record[3]:<10}{record[0]:<40}{record[1]:<30}{record[2]:<30}\n"

            query_label['text'] = p_records
            con.commit()
        except Error as e:
            messagebox.showerror("Error", f"Query error: {e}")
    else:
        messagebox.showinfo("Failed", "Authentication failed!")


# Function to hide displayed records
def hide():
    query_label['text'] = ""
    query_btn.configure(text="Show All", command=lambda: query(con))


# Initialize GUI
root = Tk()
root.title("Password Manager")
root.geometry("600x400")
root.minsize(600, 400)
root.maxsize(600, 400)

# Frame for displaying records
frame = Frame(root, bg="#774A9F", bd=5)
frame.place(relx=0.50, rely=0.50, relwidth=0.98, relheight=0.45, anchor="n")

# Input Fields
website = Entry(root, width=30)
website.grid(row=1, column=1, padx=20, pady=5)
username = Entry(root, width=30)
username.grid(row=2, column=1, padx=20, pady=5)
password = Entry(root, width=30, show="*")
password.grid(row=3, column=1, padx=20, pady=5)

# Input Labels
website_label = Label(root, text="Website:")
website_label.grid(row=1, column=0, sticky="w")
username_label = Label(root, text="Username:")
username_label.grid(row=2, column=0, sticky="w")
password_label = Label(root, text="Password:")
password_label.grid(row=3, column=0, sticky="w")

# Buttons
submit_btn = Button(root, text="Add Password", command=lambda: submit(con))
submit_btn.grid(row=5, column=1, pady=5, padx=15, ipadx=35)
query_btn = Button(root, text="Show All", command=lambda: query(con))
query_btn.grid(row=6, column=1, pady=5, padx=5, ipadx=35)

# Label to display records
query_label = Label(frame, anchor="nw", justify="left", bg="white", fg="black")
query_label.pack(fill="both", expand=True)


def main():
    root.mainloop()


if __name__ == '__main__':
    main()

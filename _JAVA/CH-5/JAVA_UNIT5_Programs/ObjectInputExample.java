import java.io.*;

class Student implements Serializable {
    int id;
    String name;

    Student(int id, String name) {
        this.id = id;
        this.name = name;
    }
}

public class ObjectInputExample {
    public static void main(String[] args) {
        try {
            // Create stream
            FileInputStream fis = new FileInputStream("student.dat");
            ObjectInputStream ois = new ObjectInputStream(fis);

            // Read object
            Student s1 = (Student) ois.readObject();

            ois.close();
            fis.close();

            System.out.println("Student ID: " + s1.id);
            System.out.println("Student Name: " + s1.name);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}

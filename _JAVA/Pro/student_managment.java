import java.util.*;

class menu{
    Scanner sc = new Scanner(System.in);

    void getChoice(){
            int menuChoice;
            System.out.println("\n--- Student Management System ---");
            System.out.println("1. Add Student");
            System.out.println("2. Update Student");
            System.out.println("3. Delete Student");
            System.out.println("4. Search Student");
            System.out.println("5. View All Students");
            System.out.println("6. Exit");
            System.out.print("Enter choice: ");

            while (true) {
                menuChoice = sc.nextInt();
                if (menuChoice == 1) {
                    System.out.println();
                    break;
                }
                else if (menuChoice == 2) {
                    
                    break;
                }
                else if (menuChoice == 3) {
                    
                    break;
                }
                else if (menuChoice == 4) {
                    
                    break;
                }
                else if (menuChoice == 5) {
                    
                    break;
                }
                else if (menuChoice == 6) {
                    System.out.println("Closing the system");
                    break;
                }
                else{
                    System.out.println("Invalid Choice enter again");
                }
            }
    }

}

public class student_managment {
    public static void main(String[] args) {
        menu m = new menu();

        m.getChoice();
    }
}


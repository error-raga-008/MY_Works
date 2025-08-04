import java.util.Scanner;

public class Q2 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter marks");
        int x = sc.nextInt();

        if (x >= 90) {
            System.out.println("A Grade");
        }
        else if (x <= 89 && x >= 70) {
            System.out.println("A Grade");
        }
        else if (x <= 69 && x >= 50) {
            System.out.println("A Grade");
        }
        else if (x > 50) {
            System.out.println("A Grade");
        }

    }
}

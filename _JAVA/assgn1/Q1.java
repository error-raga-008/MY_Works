import java.util.Scanner;

public class Q1 {
    
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter a number");
        int x = sc.nextInt();

        if (x > 0) {
            System.out.println("num is +ve");
        }
        else if (x < 0) {
            System.out.println("num is -ve");
        }
        else
        {
            System.out.println("num is 0");
        }

    }

}

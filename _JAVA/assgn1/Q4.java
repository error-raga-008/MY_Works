import java.util.Scanner;

public class Q4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter num");
        int x = sc.nextInt();

        for (int i = 1; i < 11; i++) {
            System.out.println(x+" X "+i+" = "+i*x);
        }
    }
}


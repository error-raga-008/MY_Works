import java.util.Scanner;

public class Q5 {
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter num");
        int x = sc.nextInt();

        int z = 0,y;
        
        while (x != 0) {
            y = x%10;
            z += y;
            x /= 10;
        }

        System.out.println("the sum of the number is "+z);
    }

}


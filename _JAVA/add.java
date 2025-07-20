import java.util.*;

public class add {
    public static void main(String[] args) {
        
        int a,b;

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter value of a ");

        a = sc.nextInt();

        System.out.println("Enter value of b ");

        b = sc.nextInt();

        int sum = a+b; //this is it dude

        System.out.println("The sum of a and b is "+sum); 


        //rest of the arthematic calculations
        int add = a + b;
        System.out.println(add);

        int sub = a-b;
        System.out.println(sub);

        int multi = a*b;
        System.out.println(multi);

        int div = a/b;
        System.out.println(div);

        int mod = a%b;
        System.out.println(mod);
    }
}

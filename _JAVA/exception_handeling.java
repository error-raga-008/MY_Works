import java.util.*;
public class exception_handeling {
    //exception handeling is used to catch expected error in program
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = 1;
        int b = 0;
        int c;

        try { //this is the syntax of exception_handeling
            //whatever code we need to run we put in try
            c = a/b;
            System.out.println("dividend of a and b is "+c);
        } catch (Exception e) { //in catch block we put the code we want to run if theres any error
            System.out.println("value of b is zero");
            System.out.println(e); //this will print the error given by the system
        }
        finally{ //finally block runs at the end of try or catch block it will run in both cases
            System.out.println("sup");
        }
        
        //type of error exception

        //IOException
        //this runs when we put wrong type of input like putting string in int

        try {
            int x = sc.nextInt();
            System.out.println("int value enterd is "+x);
        } catch (Exception e) {
            System.out.println(e);
        }

        //ArrayIndexOutof=BoundsException
          //this occur when u try to access an array index which does not exist
        
        int[] y = {1,2,3,4};

        try {
            System.out.println(y[5]);
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("index out of bound");
        }

        //NullPointerException
         //idk what it does but it think it accour when we access a null array index??

        int[] wtf = null;

        try {
            System.out.println(wtf[1]);
        } catch (NullPointerException e) {
            System.out.println("null poitner");
        }
    }

}


import java.util.*;

public class Objects {
    public static void fuctions(){ //basic function creating
        System.out.println("This is the first functions");
    }

    public static void number(int n){
        System.out.println("This is the sec function with int that is "+n);
    }

    public static void main(String[] args) { //main function of the program
        
        Objects ob = new Objects(); //creating of the object to call the functions

        ob.fuctions(); //calling the function using the obj

        ob.number(12); //same shit dude

    }
}

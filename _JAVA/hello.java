//javac filename.java to complie
//java filename to run the file

// ITS A FUCKING CASE SENSITIVE LANG AAAAAAAAAAAAAAAAAAAAAAAAAAAAA

import java.util.*; //importing headerfiels 

//javjava.util is the basic headerfile for java and its used for basic functions like I/O
// .* at the last of a package means we are importing all the things from the packages

// the name of the class has to be same as the file name to guide complier to start compileing from here
public class hello{ //this acts as a main function
    public static void main(String[] args) {
        System.out.println("Hello World"); // works for printing shit

        // System.out.print can also be used but it will not bring coursor to the next line


        //taking input from the user

        Scanner sc = new Scanner(System.in); //this is stander format to take input from the user

        //Scanner is the class from the headerfile
        //sc is the obj     //new is used to allocate memory

        int a; //creating value to assign the values

        a = sc.nextInt(); //taking the input from the user

        System.err.println("The value entered is "+a); //print the var with string using "+" symbol

        //Diffrent datatypes imput

            //String var = sc.nextLine();
            
            //String var = sc.next(); //this can also be used in place of above but it wont put coursor in next line

            //int var = sc.nextint();

            //long var = sc.nextLong

            //double var = sc.nextDouble

    }
}

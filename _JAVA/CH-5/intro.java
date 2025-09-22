import java.io.*;

public class intro {
    public static void main(String[] args) {
        File obj = new File("intro.txt"); //we make a "File" class obj to start working with that file;
        // !!Making an obj does not create th file

        //to make a new file we have to put it in if else and thats inside try catch
        try {
            if (obj.createNewFile() ) { //this method is used to make new file and in this sequence
                System.out.println("File created");
            }
            else{
                System.out.println("file already existed");
            }
        } catch (Exception e) {
            System.out.println(e);
        }

        
        //we use this method
         
    }
}

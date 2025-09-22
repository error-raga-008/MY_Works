import java.io.*;

public class File_reader {
    public static void main(String[] args) {
        try { //File reader wont work without try catch
            
            FileReader fr = new FileReader("intro.txt");

            //to print the content of the file
            int ch;
            while ((ch = fr.read()) != -1) {
                System.out.print((char)ch);
            }

            fr.close(); //to close the file and save it
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}

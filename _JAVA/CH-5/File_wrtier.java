import java.io.*;

public class File_wrtier {
    public static void main(String[] args) {
        try { //File writer wont work without try catch
            
            FileWriter fw = new FileWriter("intro.txt");

            fw.write("Hey Boi"); //to write content into the file
            fw.write(" sup Boy");

            fw.close();

            //to check if any changes is made

            FileReader fr = new FileReader("intro.txt");
            int ch;
            while ((ch = fr.read()) != -1) {
                System.out.print((char)ch);
            }

        } catch (Exception e) {
            System.out.println(e);
        }
    }
}

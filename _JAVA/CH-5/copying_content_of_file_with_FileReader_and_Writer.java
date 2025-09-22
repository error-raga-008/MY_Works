import java.io.*;

public class copying_content_of_file_with_FileReader_and_Writer {
    public static void main(String[] args) {
        try { //this wont work without try catch
            
            FileReader fr = new FileReader("source.txt"); //reader will be source
            FileWriter fw = new FileWriter("desitination.txt"); //writer will be destination

            int ch;

            while ((ch = fr.read()) != -1) {
                fw.write(ch);
            }

            fr.close();
            fw.close();
            
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}

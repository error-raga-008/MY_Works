import java.io.*;

public class CopyFileExample {
    public static void main(String[] args) {
        try {
            FileReader fr = new FileReader("source.txt");
            FileWriter fw = new FileWriter("destination.txt");
            
            int ch;
            while ((ch = fr.read()) != -1) {
                fw.write(ch);
            }
            
            fr.close();
            fw.close();
            System.out.println("File copied successfully!");
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}

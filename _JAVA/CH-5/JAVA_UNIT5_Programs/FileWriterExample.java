import java.io.*;

public class FileWriterExample {
    public static void main(String[] args) {
        try {
            FileWriter fw = new FileWriter("output.txt");
		
            fw.write("Hello, this is a FileWriter example!\n");
            fw.write("FileWriter writes characters, not bytes.");
            fw.close();
            System.out.println("Data written successfully.");
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
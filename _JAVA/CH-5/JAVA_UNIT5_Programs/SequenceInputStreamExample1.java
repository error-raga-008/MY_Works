import java.io.*;

public class SequenceInputStreamExample1 {
    public static void main(String[] args) {
        try {
            // Input files
            FileInputStream fis1 = new FileInputStream("file1.txt");
            FileInputStream fis2 = new FileInputStream("file2.txt");

            // Combine streams
            SequenceInputStream sis = new SequenceInputStream(fis1, fis2);

            int data;
            while ((data = sis.read()) != -1) {
                System.out.print((char) data);
            }

            sis.close();
            fis1.close();
            fis2.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}

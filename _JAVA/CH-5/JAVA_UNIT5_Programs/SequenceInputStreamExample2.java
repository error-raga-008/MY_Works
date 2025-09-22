import java.io.*;
import java.util.*;

public class SequenceInputStreamExample2 {
    public static void main(String[] args) {
        try {
            // Create input streams
            FileInputStream fis1 = new FileInputStream("file1.txt");
            FileInputStream fis2 = new FileInputStream("file2.txt");
            FileInputStream fis3 = new FileInputStream("file3.txt");

            // Add streams to a Vector
            Vector<FileInputStream> v = new Vector<>();
            v.add(fis1);
            v.add(fis2);
            v.add(fis3);

            // Get Enumeration of streams
            Enumeration<FileInputStream> e = v.elements();

            // Combine using SequenceInputStream
            SequenceInputStream sis = new SequenceInputStream(e);

            int data;
            while ((data = sis.read()) != -1) {
                System.out.print((char) data);
            }

            sis.close();
            fis1.close();
            fis2.close();
            fis3.close();
        } catch (IOException ex) {
            ex.printStackTrace();
        }
    }
}
import java.io.*;

public class RandomAccessFileExample {
    public static void main(String[] args) {
        try {
            // Open file in read-write mode
            RandomAccessFile raf = new RandomAccessFile("example.txt", "rw");

            // Write data to the file
            raf.writeUTF("Hello");
            raf.writeInt(123);
            raf.writeDouble(45.67);

            // Move file pointer back to the beginning
            raf.seek(0);

            // Read data from the file
            String str = raf.readUTF();
            int num = raf.readInt();
            double val = raf.readDouble();

            // Print results
            System.out.println("String: " + str);
            System.out.println("Integer: " + num);
            System.out.println("Double: " + val);

            // Close the file
            raf.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
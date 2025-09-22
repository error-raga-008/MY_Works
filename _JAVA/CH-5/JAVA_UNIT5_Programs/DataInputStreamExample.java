import java.io.*;
public class DataInputStreamExample {
    public static void main(String[] args) {
        try {
            FileInputStream fis = new FileInputStream("data.bin");
            DataInputStream dis = new DataInputStream(fis);
            // Reading primitive data in the same order
            int num = dis.readInt();
            double d = dis.readDouble();
            boolean flag = dis.readBoolean();

            dis.close();
            System.out.println("Integer: " + num);
            System.out.println("Double: " + d);
            System.out.println("Boolean: " + flag);
       

        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
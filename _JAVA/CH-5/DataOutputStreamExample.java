import java.io.*;

public class DataOutputStreamExample {
    public static void main(String[] args) {
        try {
            FileOutputStream fos = new FileOutputStream("data.bin");
            DataOutputStream dos = new DataOutputStream(fos);

            // Writing primitive data
            dos.writeInt(25);
            dos.writeDouble(99.75);
            dos.writeBoolean(true);
            dos.writeUTF("Hello DataOutputStream");

            dos.close();
            System.out.println("Data written successfully.");
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}

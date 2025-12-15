import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.FileInputStream;
import java.io.FileOutputStream;

public class test {

    public static void main(String[] args) {
        // Use DataOutputStream to write primitive data types (int, double, char, UTF string) to a file.
        // Then use DataInputStream to read and display them.
        try {
            FileOutputStream fo = new FileOutputStream("data.bin");
            DataOutputStream de = new DataOutputStream(fo); 

            de.writeInt(1);
            de.writeDouble(0.1);
            de.writeChar(2);
            de.writeUTF("null");
            de.close();

            FileInputStream fi = new FileInputStream("data.bin");
            DataInputStream di = new DataInputStream(fi);

            System.out.println(di.readInt());
            System.out.println(di.readDouble());
            System.out.println(di.readChar());
            System.out.println(di.readUTF());
            di.close();

        } catch (Exception e) {
           
        }

    }
}
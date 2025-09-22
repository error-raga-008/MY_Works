import java.io.*;

public class FileReaderExample {
    public static void main(String[] args) {
        try {
		
            FileReader fr = new FileReader("input.txt");
            int ch;
            while ((ch = fr.read()) != -1) {
                System.out.print((char) ch);  // convert int to char
            }
            fr.close();
	    
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}


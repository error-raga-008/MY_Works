import java.io.*;
public class File_InputStream_and_OutputStream {
    public static void main(String[] args){

        //FileReader reads the char from a file and FileWriter wrties char to a file
        //FileInputStream reads the byte from a file and FileOutputStream writes byte to a file

        try { //yes this shit will also dont without this
            FileInputStream ined = new FileInputStream("source.txt");
            FileOutputStream outed = new FileOutputStream("desitination.txt");

            int c;

            while ((c=ined.read()) != -1) {
                System.out.println(c);
                outed.write(c);
            }

            //FileInputStream Methods

            ined.read();
            ined.read(null);
            ined.available();
            

            //FileOutputStream Methods

            outed.write(1);
            outed.write(null);
            outed.write(null, c, c);
            outed.flush();

            ined.close();
            outed.close();

        } catch (Exception e) {
            // TODO: handle exception
        }
    }
}

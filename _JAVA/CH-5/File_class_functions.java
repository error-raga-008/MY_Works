import java.io.*;

public class File_class_functions {
    public static void main(String[] args) {
        File obj = new File("intro.txt");

        System.out.println("File name is:-"+obj.getName()); //get the name of the file
        System.out.println("File Path is:-"+obj.getPath()); //get the path of the file
        System.out.println("File complete Path is:-"+obj.getAbsolutePath()); //get the complete path of the file
        System.out.println("File dir is:-"+obj.getParent()); //get the parent dir of the file
        System.out.println("File length is:-"+obj.length()); //check length of file
     // System.out.println(obj.delete()); //delete the file
        
        //now checking boolean methods

        System.out.println("File exist is:-"+obj.exists()); //check if file exist
        System.out.println("File is writable?:-"+obj.canWrite()); //check if file writeable
        System.out.println("File is readable?:-"+obj.canRead()); //check if file readable
        System.out.println("File is dir?:-"+obj.isDirectory()); //check if file is dir
        System.out.println("File is file?:-"+obj.isFile()); //check if file is file
    }
}
    

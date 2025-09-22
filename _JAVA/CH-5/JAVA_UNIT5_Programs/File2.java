import java.io.*;
public class File2
{
    public static void main(String[] args)
    {
        try {
            File Obj = new File("File1.txt");
          	if (Obj.createNewFile()) 
	   {
                System.out.println("File created: " + Obj.getName());
            }
            else 
	   {
                System.out.println("File already exists.");
            }
        }
        catch (IOException e) {
            System.out.println("An error has occurred.");
        }
    }
}
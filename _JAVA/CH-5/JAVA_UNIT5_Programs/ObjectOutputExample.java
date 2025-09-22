import java.io.*;

// Serializable class
class Student implements Serializable {
    int id;
    String name;

    Student(int id, String name) {
        this.id = id;
        this.name = name;
    }
}

public class ObjectOutputExample {
    public static void main(String[] args) {
        try {
            // Create student object
            Student s1 = new Student(101, "Nasrin");

            // Create stream
            FileOutputStream fos = new FileOutputStream("student.dat");
            ObjectOutputStream oos = new ObjectOutputStream(fos);

            // Write object
            oos.writeObject(s1);

            oos.close();
            fos.close();
            System.out.println("Object written successfully.");
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}

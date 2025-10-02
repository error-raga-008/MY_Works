class person {

    String name = "a";
    int age = 1;
    
    void display(){
        System.out.println("name = "+name);
        System.out.println("age = "+name);
    }
}

class employee extends person{

    int empid = 1;
    int sal = 100;

    void dis(){
        System.out.println("empid = "+empid);
        System.out.println("sal = "+sal);
    }
}

public class Q_1 {
    public static void main(String[] args) {
        
        employee ep = new employee();

        ep.display();
        ep.dis();
    }
    
}

import java.util.*;

interface shape{ //interface class is declared by "interface" keyword and not with class
    void area(); //the methond in the interface does not contain any content its just intialized here
}

class rect implements shape{ //we use implements instead of extend to inherit the shape class
    int a =10;

    public void area(){ //we have to use public to apply the method of the interface
        System.out.println("area is "+a);
    }
} 

public class interface_class {
    public static void main(String[] args) {
        //no need to make a obj for interface
        rect r =new rect();
        r.area();
    }
    
}

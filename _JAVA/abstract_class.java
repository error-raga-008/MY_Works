abstract class animal{ //its say abstract open ur fucking eye
    abstract void sound(); //this is a abstract method and it will be empty

    void eat(){
        System.out.println("make a sound"); //this is a regular method
    }
}

class Dog extends animal { //abstract also uses the extends
    void sound() {
        System.out.println("Dog barks.");
    }
}


public class abstract_class {
    public static void main(String[] args) {
        Dog d = new Dog(); //no need to make abstract class obj
        d.eat(); //can call abstract class method directly with normal call obj
        d.sound();  //abstract method
    }
}

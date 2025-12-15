//to call the constructor using super we need to put it in the child class constructor

class shape {
    shape(int x){
        System.out.println("elo");
    }
}
class cir extends shape {
    cir(){
        super(1);
    }
}

public class test {
    public static void main(String[] args) {
        cir c = new cir();
    }    
}


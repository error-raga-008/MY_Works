class cal{
    cal(){
        System.out.println("sup");
    }
    void area(){
        System.out.println("ehelo");
    }
}

class circle extends cal{
    
    circle(){
        super();
    }
    void area(){
        System.out.println("circle area");
    }
}

class rected extends cal{
    void area(){
        System.out.println("rect area");
    }
}

public class Q_3 {

    public static void main(String[] args) {
        circle c = new circle();
        rected r = new rected();

        c.area();
        r.area();
    }
}

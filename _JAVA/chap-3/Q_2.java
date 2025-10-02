class veh{

    String brand = "FORD";
    int year = 2020;
}

class car extends veh{

    String model="bronco";
}

class elecar extends car{

    int batcap = 111;

    void out(){
        System.out.println("year = "+year+"\nbrand = "+brand+"\nmodel = "+model+"\nbatcap = "+batcap);
    }
}

public class Q_2 {
    
    public static void main(String[] args) {
        elecar e = new elecar();
        e.out();
    }
}


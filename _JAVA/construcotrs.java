public class construcotrs {

    int x;
    String s;
    
    construcotrs(){ //this is the default constructor
        System.out.println("\nthis is the defualt constructor");
    }

    construcotrs(int n){ //this is the parameterized constructor 
        System.out.println("\nthis is the parameterized constructor with a int"+n);
    }

    construcotrs(int x, String s){

        this.s = s; //this is how u use this in java
        this.x = x;

        System.out.println("\nthis the int " + x + "\nthis is the String "+x+"\n");
        
    }

    public static void main(String[] args) {
        construcotrs cs = new construcotrs(); //this wil call default constructor

        construcotrs cc = new construcotrs(1); //this will call the int constructor

        construcotrs csn = new construcotrs(1,"WOW"); //this will call the int and string constructor
    }

}

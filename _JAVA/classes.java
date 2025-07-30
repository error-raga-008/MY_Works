//Create a class Product with id, name, and price. Add a method to calculate total price with
//quantity in another Order classs. Find the total amount to be paid by the customer

import java.util.Scanner;

class Product {
Scanner sc = new Scanner(System.in);

int id;
String name;
int price;

    void getdata(){

        System.out.println("Enter ID of the Product");
        id = sc.nextInt();

        System.out.println("Enter Name of the Product");
        name = sc.next();

        System.out.println("Enter Price of the Product");
        price = sc.nextInt();

    }
    
}

public class classes {

    Scanner sc = new Scanner(System.in);

    int qty;

    void getqty(){
        System.out.println("Enter Qty of the Product");
        qty = sc.nextInt();
    }

    public static void main(String[] args) {

        classes cs = new classes();
        Product pro = new Product();

        pro.getdata();
        cs.getqty();

        System.out.println("\n\n\nThe ID is "+pro.id+"\nThen name is "+pro.name+"\nThe price is as per qty "+(pro.price*cs.qty));

    }
    
}


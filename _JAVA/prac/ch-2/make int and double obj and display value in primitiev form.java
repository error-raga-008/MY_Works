import java.util.Scanner;
//Write a Java program to create Integer and Double objects and display their values in
// different primitive forms using byteValue(), shortValue(), intValue(),
// longValue(), floatValue(), and doubleValue().
public class test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        Integer ints = Integer.valueOf(99);
        Double doub = Double.valueOf(99);

        System.out.println(ints.byteValue());
        System.out.println(ints.shortValue());
        System.out.println(ints.intValue());
        System.out.println(ints.longValue());
        System.out.println(ints.floatValue());
        System.out.println(ints.doubleValue());

        System.out.println();

        
        System.out.println(doub.byteValue());
        System.out.println(doub.shortValue());
        System.out.println(doub.intValue());
        System.out.println(doub.longValue());
        System.out.println(doub.floatValue());
        System.out.println(doub.doubleValue());

        sc.close();

    }    
}

//Write a Java program to create wrapper objects from primitive values and retrieve the
// primitive values back from wrapper objects
public class test {
    public static void main(String[] args) {
       
    int a = 1;
    long b = 11;
    double c = 11.1;

    Integer i = Integer.valueOf(a);
    Long l = Long.valueOf(b);
    Double d = Double.valueOf(c);

    System.out.println(i);
    System.out.println(l);
    System.out.println(d);

    a = i.intValue();
    b = l.longValue();
    c = d.longValue();

    System.out.println(a);
    System.out.println(b);
    System.out.println(c);

    }    
}

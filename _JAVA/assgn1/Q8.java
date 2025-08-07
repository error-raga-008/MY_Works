import java.util.Scanner;

public class Q8 {
    public void convert(int x){
        System.out.println("Enter range is "+(x*100)+"KM");
        System.out.println("Enter range is "+(x*10)+"M");
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter cm");
        int x = sc.nextInt();

        Q8 q = new Q8();
        q.convert(x);
    }
}

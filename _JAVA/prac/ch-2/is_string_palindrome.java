import java.util.*;

public class test {
    public static void main(String[] args) {
        String x = "NAUN";

        int n = x.length();

        System.out.println(n);

        for (int i = 0; i < n/2; i++) {
            
            if (x.charAt(i)!= x.charAt(n - i -1)) {
                System.out.println("NOP");
                break;
            }

        }
        System.out.println("DONE");

    }
}


import java.util.Scanner;

public class test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        StringBuilder x = new StringBuilder("ola");
        StringBuffer y = new StringBuffer("oa");

        long start = System.currentTimeMillis();

        for (int i = 0; i < 100000; i++) {
            x .append("x");
        }

        long end = System.currentTimeMillis();

        System.out.println("for buffer"+( end-start ));

        start = System.currentTimeMillis();

        for (int i = 0; i < 100000; i++) {
            y.append("x");
        }

        end = System.currentTimeMillis();

        System.out.println("for builder"+( end-start ));
    }    
}


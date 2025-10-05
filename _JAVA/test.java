public class test {

    public static void main(String[] args) {
        int[] x ={1,2};
        
        try {
            System.out.println(x[3]);
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}
public class Q7 {
  
    Q7(){
        int l = 1;
        int w = 2;

        System.out.println("default cons "+(l*w));
    }
    Q7(int w,int l){

        System.out.println("para cons "+(l*w));
    }
    public static void main(String[] args) {
        Q7 q = new Q7();
        Q7 a = new Q7(1,3);
    }
}


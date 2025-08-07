public class Q9 {
    
    String title;
    String dirctor;
    int rating;

    Q9(){
        title = "NULL";
        dirctor = "NULL";
        rating = 0;
    }

    public void show(){
        title = "abc";
        dirctor = "bdc";
        rating = 10;

        System.out.println("Titile: "+title);
        System.out.println("dicrector: "+dirctor);
        System.out.println("rating: "+rating);
    }

    public static void main(String[] args) {
        Q9 q = new Q9();

        q.show();
    }

}

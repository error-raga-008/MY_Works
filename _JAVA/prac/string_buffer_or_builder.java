import java.util.*;

public class test {
    public static void main(String[] args) {
        String x = "aean";
        String y = "AFAAA";

        StringBuffer bf = new StringBuffer("ELSO"); //declaring and value assing of string buffer
        //string name is bf and value is 'ELSO'
        System.out.println(bf.capacity()); //printing capacity

        bf.append(" WTF MAN"); //apending text
        System.out.println(bf);

        bf.replace(1, 2, y);//replacing the index 1 to 2 with string y
        System.out.println(bf);

        bf.reverse();//reversing of string
        System.out.println(bf);

        System.out.println("\n"+bf.charAt(0));//printing char at index 0

        bf.insert(10, "WOW");//inserting a new text at 10th index
        System.out.println(bf);

        bf.setCharAt(0, 'a');//char has to in ''
        System.out.println(bf);
    

    }
}


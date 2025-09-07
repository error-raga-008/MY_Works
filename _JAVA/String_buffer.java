public class String_buffer {
    public static void main(String[] args) {
        

        StringBuffer a = new StringBuffer("HELLO"); //this is how to deaclare a stringbuffer var

        System.out.println(a.capacity()); //this return the current capacity of var

        a.append(" WOW"); //add the string to the last of the string
        System.out.println(a);

        a.replace(0, 2, "DEL");//this repalce the string with index from 0 to 2
        System.out.println(a);

        a.reverse();//reverse the string
        System.out.println(a);
        a.reverse();

        System.out.println(a.charAt(1));//return char at index 1

        a.setCharAt(0, 'E'); //set the char at index 0 to "E" and use '' for char
        System.out.println(a);
    }
}

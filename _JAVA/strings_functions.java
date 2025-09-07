public class strings_functions {

    public static void main(String[] args) {
        String a = "Hello";
        String b = " World ";

        System.out.println(a.toUpperCase()); //convert string to uppercase
        System.out.println(a.toLowerCase()); //convert string to lowercase

        System.out.println(b.trim()); //trim the whitespace in the string

        System.out.println(a.startsWith("Hel")); //check if the string starts with "Hel" and return true or false
        System.out.println(a.endsWith("l")); //check if the string ends with "Hel" and return true or false

        System.out.println(a.charAt(0)); //print the char at the "0" index
        System.out.println(a.charAt(4)); //print the char at the "0" index

        System.out.println(a.length());//print the lenght of the string



        int x = 10;

        String y = String.valueOf(x); //valueOf() method converts given type such as int, long, float,
                                      //double, boolean, char and char array into string.
        System.out.println(y+10); //this show thats its converted to string and print it as string



        String c = "Java is a programming language. Java is a platform. Java is an Island";
        
        String repalced = c.replace("Java", "Kava"); //replace the occurnce of "Java" with "Kava"
        
        System.out.println(repalced);



        // The substring begins with the character at the specified index and extends to the
        // end of this string or up to endIndex – 1, if the second argument is given.
        String z = new String("This is a string");
        System.out.println(z.substring(5,10));



        //String compare is based on the Unicode value of each character in the strings.
        int d = a.compareToIgnoreCase(b);
        // 0 = equal
        //+0 = a is big then b
        //-0 = a is small then b



        
    }
    
}

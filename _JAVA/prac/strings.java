public class test {

    public static void main(String[] args) {
        
        String s = "WOW THIS IS WOW ";

        String x = s.toLowerCase();//look at the code
        System.out.println(x);//look at the code

        x = s.toUpperCase();
        System.out.println(x);

        x = s.trim();//trimming " " from starting and ending of a string
        System.out.println(x);
        
        System.out.println(s.startsWith("W")); //checking if string start with "W"
        System.out.println(s.endsWith("d"));//checking if string end with "d"

        System.out.println(s.charAt(0));//printing char at index 0

        System.out.println(s.length());//printing len of the string

        int a = 12;
        String y = String.valueOf(a); //converting int to a string
        System.out.println(y+11);

        x = x.replace("WOW", "DOW"); //replacing 'WOW' to 'DOW' in the string
        System.out.println(x);

        System.out.println(x.substring(1,4));//printing part of a string

        int c = x.compareTo(y); //comparing two strings
        //0 if both equal
        //-0 if x is less than y     
        //+0 if x is more than y
        System.out.println(c);
    }
}

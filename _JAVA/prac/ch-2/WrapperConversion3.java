public class WrapperConversion3 {
    public static void main(String[] args) {
        // Creating wrapper objects from primitive values (Autoboxing)
        int i = 10;
        double d = 20.5;
        char c = 'A';
        boolean b = true;

        Integer intObj = Integer.valueOf(i);
        Double doubleObj = Double.valueOf(d);
        Character charObj = Character.valueOf(c);
        Boolean boolObj = Boolean.valueOf(b);

        // Retrieving primitive values back (Unboxing)
        int iVal = intObj.intValue();
        double dVal = doubleObj.doubleValue();
        char cVal = charObj.charValue();
        boolean bVal = boolObj.booleanValue();

        // Display
        System.out.println("Wrapper to Primitive:");
        System.out.println("Integer object -> int: " + iVal);
        System.out.println("Double object -> double: " + dVal);
        System.out.println("Character object -> char: " + cVal);
        System.out.println("Boolean object -> boolean: " + bVal);
    }
}
//to make a Custom Exception we do this shit

class InvalidAgeException extends Exception{ //we need to extends the coustom excep to the Exception class
    InvalidAgeException(String s){ //next make a constructor to with a string perimeter
        super(s);// Pass the string to Exception constructor
    }
}
public class Custom_Exception {
    static void validate(int age)throws InvalidAgeException{ //making a fuction to check the things
        if (age<18) {
            throw new InvalidAgeException("not valid to vote");
        }
        else{
            System.out.println("welcome");
        }
    }

    public static void main(String[] args) {
        try {
            validate(12);
        } catch (Exception e) {
            System.out.println("Exception occured"+e);
        }
        System.out.println("DONE");
    }
}


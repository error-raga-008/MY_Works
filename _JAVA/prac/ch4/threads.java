//to make a thread we need to extend a class to "Thread"
class rune extends Thread{
    public void run(){ //the name of method of the thread has to be this "public void run(){}"
        System.out.println("this is thread running");
    }
}

//Using Runnable Interface
class runed implements Runnable{ //we use "implements Runnable" to use Runnable
    public void run(){
        System.out.println("This is Using Runnable Interface ");
    }
}



public class threads {
    public static void main(String[] args) {
        rune r = new rune();

        r.start(); //to run any thread we need to start it with "start()" keyword

        //to run a Runnable Interface we have to create the class object and then
        runed rr= new runed();
        //make a "Thread" class obj and pass the class obj into thread obj
        Thread t1 = new Thread(rr);
        //then run the method through thread obj
        t1.start(); //same as thread class


        
        //thread Sleep

        try{ //this is exption shit see the code for it dude
            for(int i =1;i<=5;i++){
                //Thread.sleep(1000); is used to pause the exution of the thread for a certain period
                Thread.sleep(1000); //this is milisec 
                System.out.println(i);
            }
        }
        catch (Exception e){
            System.out.println(e);
        }

    }
}

//Thread has 3 priority but they dont do shit we we have to fucking learn XD\

class myThread extends Thread{
    public myThread(String name){ //we making this constructor to see the the which thread is ran first 
        //DONT NEEDED FOR BASIC THREADING
        super(name); //This is used to call the "extened" class constructor
    }

    public void run(){
        for (int i = 0; i < 5; i++) {
            System.out.println(getName()+" Priority = "+getPriority()+" AND Count = "+i);
            //getName() = get the name of current thread
            //getPriority() = get priority of current thread
        }
    }
}

public class thread_prioritys {

    public static void main(String[] args) {
        myThread t1 = new myThread("min"); //we give the name to tell which thread we running 
        myThread t2 = new myThread("nor");  
        myThread t3 = new myThread("max");
        
        t1.setPriority(Thread.MIN_PRIORITY); //MIN PROITRTY //applying the proirty to the THREADS
        t2.setPriority(Thread.NORM_PRIORITY);//NORM PROITRTY //applying the proirty to the THREADS
        t3.setPriority(Thread.MAX_PRIORITY); //MAX PROITRTY //applying the proirty to the THREADS

        t1.start();
        t2.start();
        t3.start();
    }
}
//no need to make parent class obj in java 

//use chatgpt to see example i am too lazy rightnow

//Java does not support multiple inheritance

public class AA{
    int a =1;
}

public class BB extends AA{ //"extends" keyword is used to inhert a class in java
    void tun(){
        System.out.println("this is single inheritance and it exteds or inherits to class AA"+a);
    }
}

public class CC extends BB{
    void dun(){
        System.out.println("now this has becom multi level inheritance and it extends to class BB");
        BB b = new BB();
        b.tun();
    }
}


//Hierarchical inheritance
public class XX{
    int x;
}

public class YY extends XX{ 
    int y =x;
}

public class ZZ extends XX{ //this class and above one both extends to xx class
    int z =x;
}

public class inheritance { 
    
}


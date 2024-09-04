package Constructor;

// You are using Java
import java.util.*;
class Birds{
    Birds(){
        System.out.print("Birds : ");
    }
}
class Parrot extends Birds{
    Parrot(String a){
        System.out.println("Grey Parrot");
    }
}
class Cocktail extends Birds{
    Cocktail(String a){
        System.out.println("Grey Cocktail");
    }
}
class Kiwi extends Birds{
    Kiwi(String a){
        System.out.println("Grey Kiwi");
    }
}
public class Main{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        String s=in.nextLine();
        if(s.equals("Parrot"))
        { Parrot b=new Parrot(s);}
        else if(s.equals("Cocktail"))
        {Cocktail b=new Cocktail(s);}
        else
       { Kiwi b=new Kiwi(s);}
    }
}
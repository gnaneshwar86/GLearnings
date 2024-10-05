// You are using Java
import java.util.*;
class Gift{
    private int amount;
    void setamount(int amount){
        this.amount=amount;
    }
    int getamount(){
        return amount;
    }
}
class Mobile extends Gift{
    Mobile(int amount){
        setamount(amount); 
    }
}
class Laptop extends Gift{
    Laptop(int amount){
        setamount(amount); 
    }
}
class Bike extends Gift{
    Bike(int amount){
        setamount(amount); 
    }
}
public class GiftAmount{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int mla=sc.nextInt();
        int ba=sc.nextInt();
        Mobile m=new Mobile(mla);
        Laptop l=new Laptop(mla);
        Bike b=new Bike(ba);
        int tot=m.getamount()+l.getamount()+b.getamount();
        System.out.println("Total amount of gifts: "+tot);
    }
}
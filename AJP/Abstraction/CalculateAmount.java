// You are using Java
import java.util.*;
abstract class ItemType{
    abstract double calculateAmount();
}
class wooden extends ItemType{
    int noOfItems;
    double cost;
    wooden(int noOfItems,double cost){
        this.noOfItems=noOfItems;
        this.cost=cost;
    }
    double calculateAmount(){
        return (this.noOfItems*this.cost);
    }
}
class electronics extends ItemType{
    String type;
    double amount;
    electronics(String type,double amount){
        this.type=type;
        this.amount=amount;
    }
    double calculateAmount(){
        if(this.type.equals("Commercial"))
        return this.amount;
        else
        return this.amount*0.95;
    }
}
class Main{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        switch(n){
            case 1 :
                wooden a=new wooden(in.nextInt(),in.nextDouble());
                System.out.printf("%.1f",a.calculateAmount());
                break;
            case 2 :
                electronics b=new electronics(in.next(),in.nextDouble());
                System.out.printf("%.1f",b.calculateAmount());
                break;
        }
    }
}
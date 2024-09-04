// You are using Java
import java.util.*;
import java.io.*;
class ItemType{
    private String name;
    private double deposit,costPerDay;
    ItemType(String name,double deposit,double costPerDay){
        this.name=name;
        this.deposit=deposit;
        this.costPerDay=costPerDay;
    }
    void tomString(){
        System.out.println(this.name+" "+this.deposit+" "+this.costPerDay);
    }
}
class Main{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        try{
            ItemType s=new ItemType(in.nextLine(),Double.parseDouble(in.nextLine()),Double.parseDouble(in.nextLine()));
            s.tomString();
        }
        catch(NumberFormatException e){
            System.out.println(e);
        }
    }
}
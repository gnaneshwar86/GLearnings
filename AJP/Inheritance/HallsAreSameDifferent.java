// You are using Java
package Inheritance;
import java.util.*;
class Hall{
    private String name;
    private String num;
    private double cost;
    private String owname;
    Hall(String name,String num,double cost,String owname){
        this.name=name;
        this.num=num;
        this.cost=cost;
        this.owname=owname;
    }
    String getname(){
        return name;
    }
    String getnum(){
        return num;
    }
    double getcost(){
        return cost;
    }
    String getowname(){
        return owname;
    }
}
public class HallsAreSameDifferent{
    public static boolean equals(Hall a,Hall b){
        if(!(a.getname().equals(b.getname())))
        return false;
        else if(!(a.getnum().equals(b.getnum())))
        return false;
        else if(!(a.getcost()==b.getcost()))
        return false;
        else if(!(a.getowname().equals(b.getowname())))
        return false;
        else
        return true;
    }
    public static void main(String args[]){
        Scanner in=new Scanner(System.in);
        Hall a=new Hall(in.next(),in.next(),in.nextDouble(),in.next());
        Hall b=new Hall(in.next(),in.next(),in.nextDouble(),in.next());
        if(equals(a,b))
        System.out.println("Halls are same");
        else
        System.out.println("Halls are different");
    }
}
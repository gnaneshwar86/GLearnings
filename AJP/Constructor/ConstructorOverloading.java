// You are using Java
import java.util.*;
class Overloading{
    String name;
    String day;
    int temp;
    Overloading(){
        name="Argentina";
        temp=29;
        System.out.println(name+" Yesterday Temperature: "+temp+"\u00B0");
    }
    Overloading(String name,int temp){
        this.name=name;
        this.temp=temp;
        System.out.println(name+" Today Temperature: "+temp+"\u00B0");
    }
    Overloading(String name,String day,int temp){
        this.name=name;
        this.day=day;
        this.temp=temp;
        System.out.println(name+" "+day+" Temperature: "+temp+"\u00B0");
    }
}
class Main{
    public static void main(String args[]){
        Scanner in=new Scanner(System.in);
        Overloading a=new Overloading();
        Overloading b=new Overloading(in.next(),in.nextInt());
        Overloading c=new Overloading(in.next(),in.next(),in.nextInt());
    }
}
// You are using Java
package Inheritance;
import java.util.*;
class Menu{
    String name,desc,type;
    double price;
    Menu(String name,String desc,double price,String type){
        this.name=name;
        this.desc=desc;
        this.price=price;
        this.type=type;
    }
}
class Appetizer extends Menu{
    Appetizer(String name,String desc,double price,String type){
        super(name,desc,price,type);
        System.out.println("Name: "+this.name);
        System.out.println("Description: "+this.desc);
        System.out.println("Price: $"+this.price);
        System.out.println("Type: "+this.type);
        System.out.println("Serving appetizer: "+this.name+".");
    }
}
class MainCourse extends Menu{
    MainCourse(String name,String desc,double price,String type){
        super(name,desc,price,type);
        System.out.println("Name: "+this.name);
        System.out.println("Description: "+this.desc);
        System.out.println("Price: $"+this.price);
        System.out.println("Dish Type: "+this.type);
        System.out.println("Preparing main course: "+this.name+".");
    }
}
class Dessert extends Menu{
    Dessert(String name,String desc,double price,String type){
        super(name,desc,price,type);
        System.out.println("Name: "+this.name);
        System.out.println("Description: "+this.desc);
        System.out.println("Price: $"+this.price);
        System.out.println("Flavor: "+this.type);
        System.out.println("Serving dessert: "+this.name+".");
    }
}
public class MenuHotel{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        String name=in.nextLine();
        String desc=in.nextLine();
        double price=in.nextDouble();
        in.nextLine();
        String course=in.nextLine();
        String type;
        if(course.equals("Appetizer")) {
                type=in.next();
                Appetizer a=new Appetizer(name,desc,price,type);}
        else if(course.equals("Main Course")){
                type=in.next();
                MainCourse b=new MainCourse(name,desc,price,type);}
        else if(course.equals("Dessert")){
                type=in.next();
                Dessert c=new Dessert(name,desc,price,type);}
        else
                System.out.println("Invalid menu item type entered.");
        
    }
}
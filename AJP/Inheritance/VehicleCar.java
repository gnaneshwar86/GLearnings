// You are using Java
package Inheritance;
import java.util.*;
class Vehicle{
    protected String type;
    Vehicle(String type){
        this.type=type;
    }
    public void displayType(){
        System.out.println("Type: "+type);
    }
}
class Car extends Vehicle{
    private String brand;
    Car(String type,String brand){
        super(type);
        this.brand=brand;
    }
    public void displayBrand(){
        System.out.println("Brand: "+brand);
    }
}
public class VehicleCar{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        Car c=new Car(in.nextLine(),in.nextLine());
        c.displayType();
        c.displayBrand();
    }
}

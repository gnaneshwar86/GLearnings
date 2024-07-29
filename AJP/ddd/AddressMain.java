// You are using Java
import java.util.*;
class Address{
    String street,city,country;
    String pin;
    void display(){
        System.out.println("Street: "+street);
        System.out.println("City: "+city);
        System.out.println("Pincode: "+pin);
        System.out.println("Country: "+country);
    }
}
public class AddressMain{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        Address a=new Address();
        a.street=in.nextLine();
        a.city=in.next();
        a.pin=in.next();
        a.country=in.next();
        a.display();
    }
}
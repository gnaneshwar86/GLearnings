// You are using Java
import java.util.*;
import java.text.*;
class StationaryItem{
    private String name;
    private double price;
    private double qty;
    String getname(){
        return name;
    }
    double getprice(){
        return price;
    }
    double getqty(){
        return qty;
    }
    StationaryItem(){
        name="";
        price=0.0;
        qty=0.0;
    }
    StationaryItem(String name,double price,double qty){
        this.name=name;
        this.price=price;
        this.qty=qty;
    }
}
class StationaryItemBO{
    StationaryItem s[]=new StationaryItem[10];
    DecimalFormat f=new DecimalFormat("0.0");
    int i=0;
    void addStationaryItem(String name,double price,double qty){
        s[i]=new StationaryItem(name,price,qty);
        i++;
    }
    void searchStationaryItem(String sname){
        int k=0;
        for(int j=0;j<i;j++){
            if(s[j].getname().equals(sname)){
                System.out.println(s[j].getname()+" "+f.format(s[j].getprice())+" "+f.format(s[j].getqty()));
                k++;
            }
        }
        if(k==0)
        System.out.println("Searched item Type not found");
    }
    void displayAllItems(){
        System.out.println("All stationary item details:");
        for(int j=0;j<i;j++){
            System.out.println(s[j].getname()+" "+f.format(s[j].getprice())+" "+f.format(s[j].getqty()));
        }
    }
}
public class StationaryShopManagement{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        StationaryItemBO a=new StationaryItemBO();
        for(int i=0;i<n;i++){
            in.nextLine();
            a.addStationaryItem(in.nextLine(),in.nextDouble(),in.nextDouble());
        }
        in.nextLine();
        a.searchStationaryItem(in.nextLine());
        a.displayAllItems();
    }
}
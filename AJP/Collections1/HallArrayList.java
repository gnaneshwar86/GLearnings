// You are using Java
import java.util.*;
class Hall{
    String name,contactNumber,ownerName;
    double costPerDay;
    Hall(String name,String contactNumber,double costPerDay,String ownerName){
        this.name=name;
        this.contactNumber=contactNumber;
        this.costPerDay=costPerDay;
        this.ownerName=ownerName;
    }
    void display(){
        System.out.printf("%-20s%-20s%-20s%-20s\n",name,contactNumber,costPerDay,ownerName);
    }
}
public class HallArrayList{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        int n=Integer.parseInt(in.nextLine());
        if(n<1){
            System.out.println("The list is empty");
            return;
        }
        ArrayList<Hall> a=new ArrayList<Hall>();
        for(int i=0;i<n;i++){
            a.add(new Hall(in.nextLine(),in.nextLine(),Integer.parseInt(in.nextLine()),in.nextLine()));
        }
        a.remove(in.nextInt());
        System.out.printf("%-20s%-20s%-20s%-20s\n","Name","Contact Number","CostperDay","Owner Name");
        for(Hall i:a){
            i.display();
        }
    }
}
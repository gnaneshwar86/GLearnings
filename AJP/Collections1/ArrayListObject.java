// You are using Java
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Scanner;

class ItemType{
    String name;
    double deposit,costPerDay;
    ItemType(String name,double deposit,double costPerDay){
        this.name=name;
        this.deposit=deposit;
        this.costPerDay=costPerDay;
    }
}

public class ArrayListObject {
	public static void main(String args[]) {
		Scanner in=new Scanner(System.in);
		int n=Integer.parseInt(in.nextLine());
		ArrayList<ItemType> a=new ArrayList<ItemType>();
		for(int i=0;i<n;i++){
		    a.add(new ItemType(in.nextLine(),Integer.parseInt(in.nextLine()),Integer.parseInt(in.nextLine())));
		}
		System.out.printf("%-20s%-20s%-20s\n","Name","Deposit","Cost Per Day");
		for(ItemType i:a){
		    System.out.printf("%-20s%-20s%-20s\n",i.name,i.deposit,i.costPerDay);
		}
	}
	
}

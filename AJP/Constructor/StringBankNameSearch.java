// You are using Java
import java.util.*;
class ItemType{
    String name;
    double deposit,cost;
    ItemType(String name,double deposit,double cost){
        this.name=name;
        this.deposit=deposit;
        this.cost=cost;
    }
}
class ItemTypeBO{
    public void search(String search,ItemType[] arr){
        for(int i=0;i<arr.length;i++){
            if(search.equals(arr[i].name)){
                System.out.printf(arr[i].name+" %.1f %.1f\n",arr[i].deposit,arr[i].cost);
                return;
            }
        }
        System.out.println("Searched item Type not found");
    }
    public void display(ItemType[] arr){
        for(int i=0;i<arr.length;i++){
            System.out.printf(arr[i].name+" %.1f %.1f\n",arr[i].deposit,arr[i].cost);
        }
    }
}
class StringBankNameSearch{
    public static void main(String args[]){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        ItemType[] a=new ItemType[n];
        for(int i=0;i<n;i++){
            a[i]=new ItemType(in.next(),in.nextDouble(),in.nextDouble());
        }
        ItemTypeBO b=new ItemTypeBO();
        b.search(in.next(),a);
        b.display(a);
    }
}
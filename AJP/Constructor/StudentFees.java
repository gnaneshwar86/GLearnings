// You are using Java
import java.util.*;
class StationaryShop{
    int id;
    String name;
    double tfee,efee;
    StationaryShop(int id,String name,double tfee,double efee){
        this.id=id;
        this.name=name;
        this.tfee=tfee;
        this.efee=efee;
    }
    double calculateTotalFee(){
        return tfee+efee;
    }
    void display(){
        System.out.println("Student ID: "+id);
        System.out.println("Student Name: "+name);
        System.out.printf("Tuition Fee: $%.1f\n",tfee);
        System.out.printf("Exam Fee: $%.1f\n\n",efee);
    }
}
public class StudentFees{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt(),c=0;
        StationaryShop s[]=new StationaryShop[n];
        for(int i=0;i<n;i++){
            int id=in.nextInt();
            String name=in.next();
            double tfee=in.nextDouble();
            double efee=in.nextDouble();
            s[i]=new StationaryShop(id,name,tfee,efee);
        }
        double d=in.nextDouble();
        for(int i=0;i<n;i++){
            if(s[i].calculateTotalFee()>d){
                s[i].display();
                c++;
            }
        }
        if(c==0)
        System.out.printf("No students found with Total Fee : %.1f",d);
    }
}
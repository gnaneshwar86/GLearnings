// You are using Java
import java.util.*;
class Student
{
    int id;
    double fee;
     Student(int id,double fee)
     {
         this.id=id;
         this.fee=fee;
     }
    
    void display()
    {
        System.out.println("Student ID: "+id);
        System.out.println("Fee Amount: "+fee);
        
    }
}
class FeeLevel extends Student
{
    FeeLevel(int id,double fee)
    {
        super(id,fee);
    }
    void display()
    {
        if(fee>=1000)
        {
            System.out.println("Fee Level: Level 1");
        }
        else
        {
            System.out.println("Fee Level: Level 2");
            
        }
        
    }
}
public class StudentFeeLevel{
    public static void main(String args[])
    {
        int a;
        double b;
        Scanner r=new Scanner(System.in);
        a=r.nextInt();
        b=r.nextDouble();
        Student ob=new Student(a,b);
        ob.display();
        FeeLevel ob1=new FeeLevel(a,b);
        ob1.display();
        
    }
}
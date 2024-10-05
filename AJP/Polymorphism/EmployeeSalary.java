// You are using Java
// You are using Java
import java.util.*;
class Employee
{
    String a,d;
    int b,c,e,f;
    Employee(String a,int b,int c,String d,int e,int f)
    {
        this.a=a;
        this.b=b;
        this.c=c;
        this.d=d;
        this.e=e;
        this.f=f;
    }
    double calculateSalary()
    {
        return 0;
    }
    
}
class Manager extends Employee
{
    Manager(String a,int b,int c,String d,int e,int f)
    {
       super(a,b,c,d,e,f);
    }
    double calculateSalary()
    {
        return b+c;
    }
    
}
class Engineer extends Employee
{
     Engineer(String a,int b,int c,String d,int e,int f)
    {
       super(a,b,c,d,e,f);
    }
    double calculateSalary()
    {
        return e+f;
    }
    
}
public class EmployeeSalary{
    public static void main(String args[])
    {
    String a,d;
    int b,c,e,f;
    Scanner r=new Scanner(System.in);
    a=r.nextLine();
    b=r.nextInt();
    c=r.nextInt();
    r.nextLine();
    d=r.nextLine();
    e=r.nextInt();
    f=r.nextInt();
    
    Manager ob=new Manager(a,b,c,d,e,f);
    Engineer ob1=new Engineer(a,b,c,d,e,f);
    System.out.println("Manager Salary: "+ob.calculateSalary());
    System.out.println("Engineer Salary: "+ob1.calculateSalary());

    }
}
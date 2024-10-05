package Inheritance;
// You are using Java
import java.util.*;
class Employee{
    String eName;
    int eid,esalary;
    static String cp= "ABC Corp";
    Employee(String eName,int eid,int esalary){
        this.eName=eName;
        this.eid=eid;
        this.esalary=esalary;
    }
    void display(){
        System.out.println("Employee Name: "+eName);
        System.out.println("Employee ID: "+eid);
        System.out.println("Employee Salary: "+esalary);
        System.out.println("Employee Company Name: "+cp);
    }
    static void changecp(String newcp){
        cp=newcp;
    }
}
public class EmployeeABCCorp{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        Employee a[]=new Employee[n];
        for(int i=0;i<n;i++){
            a[i]=new Employee(in.next(),in.nextInt(),in.nextInt());
            a[i].display();
        }
        String b=in.next();
        Employee.changecp(b);
        System.out.println("Updated Details");
        for(int i=0;i<n;i++){
            a[i].display();
        }
        
        
    }
}
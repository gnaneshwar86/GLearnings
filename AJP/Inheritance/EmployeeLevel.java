package Inheritance;
// You are using Java
import java.util.*;
class Employee{
    int empid;
    float salary;
    Employee(int empid,float salary){
        this.empid=empid;
        this.salary=salary;
    }
}
class empLevel extends Employee{
    empLevel(int empid,float salary){
        super(empid,salary);
        if(salary>100)
            System.out.println(this.empid+"\n"+this.salary+"\n1");
        else
            System.out.println(this.empid+"\n"+this.salary+"\n2");
    }
}
public class EmployeeLevel{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        empLevel e=new empLevel(in.nextInt(),in.nextFloat());
    }
}
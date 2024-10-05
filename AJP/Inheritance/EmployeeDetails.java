package Inheritance;

// You are using Java
import java.util.*;
class employee{
    String role,name,pgm;
    int age,salary,dur;
    employee(String role,String name,int age,int salary,int dur){
        this.role=role;
        this.name=name;
        this.age=age;
        this.salary=salary;
        this.dur=dur;
    }
    employee(String role,String name,int age,int salary,String pgm){
        this.role=role;
        this.name=name;
        this.age=age;
        this.salary=salary;
        this.pgm=pgm;
    }
    void display(){
        System.out.print("Role: "+role+", Name: "+name+",Age: "+age);
        System.out.printf(", Salary: %.1f, ",(float)salary);
        if(role.equals("Manager"))
            System.out.println("TeamSize: "+dur);
        else if(role.equals("Developer"))
            System.out.println("ProgrammingLanguage: "+pgm);
        else if(role.equals("Intern"))
            System.out.println("DurationMonths: "+dur);
    }
}
class Manager extends employee{
    Manager(String role,String name,int age,int salary,int dur){
        super(role,name,age,salary,dur);
    }
}
class Developer extends employee{
    Developer(String role,String name,int age,int salary,String pgm){
        super(role,name,age,salary,pgm);
    }
}
class Intern extends employee{
    Intern(String role,String name,int age,int salary,int dur){
        super(role,name,age,salary,dur);
    }
}
public class EmployeeDetails{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        for(int i=0;i<n;i++){
            String role=in.next();
            if(role.equals("Manager")){
                Manager a=new Manager(role,in.next(),in.nextInt(),in.nextInt(),in.nextInt());
                a.display();
            }
            else if(role.equals("Developer")){
                Developer b=new Developer(role,in.next(),in.nextInt(),in.nextInt(),in.next());
                b.display();
            }
            else if(role.equals("Intern")){
                Intern c=new Intern(role,in.next(),in.nextInt(),in.nextInt(),in.nextInt());
                c.display();
            }
        }
    }
}
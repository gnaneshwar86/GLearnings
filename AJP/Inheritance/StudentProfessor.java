// You are using Java
package Inheritance;
import java.util.*;

class Student{
    String name,id,dept;
    Student(String name,String id,String dept){
        this.name=name;
        this.id=id;
        this.dept=dept;
    }
    void display(){
        System.out.println("Name: "+name);
        System.out.println("ID: "+id);
        System.out.println("Major: "+dept);
        System.out.println(name+" is enrolling in a course.");
    }
}
class Professor{
    String name,id,dept;
    Professor(String name,String id,String dept){
        this.name=name;
        this.id=id;
        this.dept=dept;
    }
    void display(){
        System.out.println("Name: "+name);
        System.out.println("ID: "+id);
        System.out.println("Department: "+dept);
        System.out.println(name+" is teaching a course.");
    }
}
public class StudentProfessor{
    public static void main(String[]ags){
        Scanner in=new Scanner(System.in);
        String role=in.nextLine();
        if(role.equals("Student")){
            Student a=new Student(in.nextLine(),in.nextLine(),in.nextLine());
            a.display();
        }
        else if(role.equals("Professor")){
            Professor b=new Professor(in.nextLine(),in.nextLine(),in.nextLine());
            b.display();
        }
        else{
            System.out.println("Invalid role entered.");
        }
    }
}
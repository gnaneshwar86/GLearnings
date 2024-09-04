package Constructor;

// You are using Java
import java.util.*;
class Professor{
    int id;
    String name;
    int salary;
    Professor(int id,String name,int salary){
        this.id=id;
        this.name=name;
        this.salary=salary;
    }
    void dis(){
        if(salary>20000)
        System.out.println(id+" "+name+" "+salary);
    }
}
public class ProfessorSalary{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        Professor[] a=new Professor[n];
        for(int i=0;i<n;i++){
            a[i]=new Professor(in.nextInt(),in.next(),in.nextInt());
        }
        for(int i=0;i<n;i++){
            a[i].dis();
        }
        
    }
}
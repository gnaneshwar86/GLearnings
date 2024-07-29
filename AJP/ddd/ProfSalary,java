// You are using Java
import java.util.*;
class Prof{
    int id,age,sal;
    String name,dept;
    void get(){
        System.out.print(id+" "+name+" "+dept+" "+age+" "+sal);
    }
}
public class ProfSalary{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt(),m=0,j=0;
        Prof a[]=new Prof[n];
        for(int i=0;i<n;i++){
            a[i]=new Prof();
            a[i].id=in.nextInt();
            a[i].name=in.next();
            a[i].dept=in.next();
            a[i].age=in.nextInt();
            a[i].sal=in.nextInt();
            if(m<a[i].sal){
                m=a[i].sal;
                j=i;
            }
        }
        a[j].get();
    }
}
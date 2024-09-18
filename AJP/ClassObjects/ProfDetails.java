// You are using Java
import java.util.*;
class Prof{
    int id;
    String name;
    String dept;
    int age;
    int salary;
}
public class ProfDetails{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt(),m=0,c=0;
        Prof p[]=new Prof[n];
        for(int i=0;i<n;i++){
            p[i]=new Prof();
            p[i].id=in.nextInt();
            p[i].name=in.next(); 
            p[i].dept=in.next(); 
            p[i].age=in.nextInt(); 
            p[i].salary=in.nextInt();
            if(m<p[i].salary){
                m=p[i].salary;
                c=i;
            }
        }
        System.out.println(p[c].id+" "+p[c].name+" "+p[c].dept+" "+p[c].age+" "+p[c].salary);
    }
}
// You are using Java
import java.util.*;
class Student{
    int rno,m1,m2,m3;
    String name;
    double avg;
    Student(int rno,int m1,int m2,int m3,String name){
        this.rno=rno;
        this.m1=m1;
        this.m2=m2;
        this.m3=m3;
        this.name=name;
    }
    void calc(){
        avg = (m1+m2+m3)/3;
    }
}
public class StudentArrayList{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        int n=Integer.parseInt(in.nextLine());
        ArrayList<Student> a=new ArrayList<Student>();
        for(int i=0;i<n;i++){
            int rno=Integer.parseInt(in.nextLine());
            String name=in.nextLine();
            int m1=Integer.parseInt(in.nextLine());
            int m2=Integer.parseInt(in.nextLine());
            int m3=Integer.parseInt(in.nextLine());
            Student s=new Student(rno,m1,m2,m3,name);
            s.calc();
            a.add(s);
        }
        a.sort((a1,a2)->Double.compare(a1.avg,a2.avg));
        System.out.printf("%-20s%-20s%-20s\n","Roll No","Name","Average");
        for(Student i:a){
            System.out.printf("%-20s%-20s%-20s\n",i.rno,i.name,i.avg);
        }
    }
}
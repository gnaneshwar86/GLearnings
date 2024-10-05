// You are using Java
import java.util.*;
abstract class maths{
    abstract void recperimeter();
    abstract void sqperimeter();
    abstract void triperimeter();
    abstract void traperimeter();
    abstract void cirperimeter();
}
class perimeter extends maths{
    int l,b,s,a,b1,c,a1,b2,c1,d1,r;
    int ar[]=new int[5];
    perimeter(int l,int b,int s,int a,int b1,int c,int a1,int b2,int c1,int d1,int r){
        this.l=l;
        this.b=b;
        this.s=s;
        this.a=a;
        this.b1=b1;
        this.c=c;
        this.a1=a1;
        this.b2=b2;
        this.c1=c1;
        this.d1=d1;
        this.r=r;
    }
    void recperimeter(){
        System.out.println(2*(l+b));
        ar[0]=2*(l+b);
    }
    void sqperimeter(){
        System.out.println(4*s);
        ar[1]=4*s;
    }
    void triperimeter(){
        System.out.println(a+b1+c);
        ar[2]=a+b1+c;
    }
    void traperimeter(){
        System.out.println(a1+b2+c1+d1);
        ar[3]=a1+b2+c1+d1;
    }
    void cirperimeter(){
        System.out.println(2*3*r);
        ar[4]=2*3*r;
    }
    void calSum(){
        int sum=0;
        for(int i=0;i<5;i++){
            sum+=ar[i];
        }
        System.out.println(sum+" ");
    }
    void sortPeri(){
        Arrays.sort(ar);
        for(int i=0;i<5;i++){
            System.out.print(ar[i]+" ");
        }
    }
}
public class MathsCalculationShapes{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int l=sc.nextInt();
        int b=sc.nextInt();
        int s=sc.nextInt();
        int a=sc.nextInt();
        int b1=sc.nextInt();
        int c=sc.nextInt();
        int a1=sc.nextInt();
        int b2=sc.nextInt();
        int c1=sc.nextInt();
        int d1=sc.nextInt();
        int r=sc.nextInt();
        perimeter p=new perimeter(l,b,s,a,b1,c,a1,b2,c1,d1,r);
        p.recperimeter();
        p.sqperimeter();
        p.triperimeter();
        p.traperimeter();
        p.cirperimeter();
        p.calSum();
        p.sortPeri();
    }
}
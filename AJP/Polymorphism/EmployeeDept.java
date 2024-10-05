import java.util.*;
class Employee{
    private String name,department;
    private int age;
    Employee(String name,int age,String department){
        this.name=name;
        this.age=age;
        this.department=department;
    }
    String getname(){
        return name;
    }
    String getdept(){
        return department;
    }
    void role(){
        System.out.println(name+"("+department+"):Performing their general role.");
    }
}
class Engineering extends Employee{
    Engineering(String name,int age){
        super(name,age,"Engineering");
    }
    void role(){
        System.out.println(getname()+" ("+getdept()+"): Solving technical problems.");
    }
}
class Marketing extends Employee{
    Marketing(String name,int age){
        super(name,age,"Marketing");
    }
    void role(){
        System.out.println(getname()+" ("+getdept()+"): Creating marketing strategies.");
    }
}
class HR extends Employee{
    HR(String name,int age){
        super(name,age,"HR");
    }
    void role(){
        System.out.println(getname()+" ("+getdept()+"): Managing employee relations.");
    }
}
public class EmployeeDept{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        String ename=sc.nextLine();
        int eage=sc.nextInt();
        sc.nextLine();
        Engineering e=new Engineering(ename,eage);
        String mname=sc.nextLine();
        int mage=sc.nextInt();
        sc.nextLine();
        Marketing m=new Marketing(mname,mage);
        String hname=sc.nextLine();
        int hage=sc.nextInt();
        HR h=new HR(hname,hage);
        e.role();
        m.role();
        h.role();
        System.out.println("Program has finished.");   
    }
}
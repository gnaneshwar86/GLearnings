// You are using Java
import java.util.*;
class Card implements Comparable<Card>{
    String s;
    int num;
    Card(String s,int num){
        this.s=s;
        this.num=num;
    }
    public int compareTo(Card a){
        int res =  this.s.compareTo(a.s);
        if(res==0)
            return Integer.compare(this.num,a.num);
        return res;
    }
}

public class MultiCards{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        TreeMap<String,TreeSet<Card>> a=new TreeMap<>();
        for(int i=0;i<n;i++){
            String s=in.next();
            int num=in.nextInt();
            a.putIfAbsent(s,new TreeSet<>());
            a.get(s).add(new Card(s,num));
        }
        System.out.println("Distinct Symbols are: ");
        for(String i:a.keySet())
            System.out.print(i+" ");
        for(String i:a.keySet()){
            System.out.println("Cards in "+i+" Symbol:");
            int s=0;
            for(Card j:a.get(i)){
                System.out.println(j.s+" "+j.num);
                s+=j.num;
            }
            System.out.println("Number of Cards: "+a.get(i).size());
            System.out.println("Sum of Numbers: "+s);
        }
    }
}
// You are using Java
import java.util.*;
public class TreeMapExample{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        HashMap<String,Integer>b=new HashMap<>();
        TreeMap<String,Integer>a=new TreeMap<>();
        for(int i=0;i<n;i++){
            String s=in.next();
            in.next();
            int c=in.nextInt();
            a.put(s,a.getOrDefault(s,0)+c);
        }
        for(String i:a.keySet()){
            System.out.println(i+" "+a.get(i));
        }
    }
}
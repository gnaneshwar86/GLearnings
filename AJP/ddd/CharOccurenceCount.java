// You are using Java
import java.util.*;
class Occurence{
    String a;
    public int occ(char c){
        int co=0;
        for(int i=0;i<a.length();i++){
            if(a.charAt(i)==c)
            co++;
        }
        return co;
    }
}
public class CharOccurenceCount{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        Occurence o=new Occurence();
        o.a=in.next();
        char c=in.next().charAt(0);
        System.out.println(o.occ(c));
    }
}
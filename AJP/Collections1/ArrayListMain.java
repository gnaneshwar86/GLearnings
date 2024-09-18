// You are using Java
import java.util.*;
class ArrayListMain{
    public static void main(String []args){
        Scanner in = new Scanner(System.in);
        int n = Integer.parseInt(in.nextLine());
        ArrayList<String> a = new ArrayList<String>();
        for(int i=0;i<n;i++){
            a.add(in.nextLine());
        }
        for(String i:a)
        System.out.println(i);
    }
}
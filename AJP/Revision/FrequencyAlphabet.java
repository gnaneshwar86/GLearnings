// You are using Java
import java.util.*;
public class FrequencyAlphabet{
    public static void main(String args[]){
        Scanner in=new Scanner(System.in);
        String s=in.nextLine();
        int[] a=new int[26];
        for(int i=0;i<s.length();i++){
            a[(int)(s.charAt(i)-'a')]++;
        }
        for(int i=0;i<26;i++){
            if(a[i]!=0){
                System.out.println((char)(i+'a')+"-"+a[i]);
            }
        }
    }
}
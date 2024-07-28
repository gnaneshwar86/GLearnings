// You are using Java
import java.util.*;
class UpperLowerCaseCount {
   public static void main(String args[]) throws Exception{
       Scanner in=new Scanner(System.in);
       String a=in.nextLine();
       int u=0,l=0;
       for(int i=0;i<a.length();i++){
           if(Character.isUpperCase(a.charAt(i)))
           u++;
           else if(Character.isLowerCase(a.charAt(i)))
           l++;
       }
       System.out.println(u+"\n"+l);
   }
}
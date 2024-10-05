import java.util.*;
public class IndexFindMatch {
 
   public static void main(String[] args) {
	   
	   Scanner s=new Scanner(System.in);
	   String str=s.nextLine();
	   System.out.println(validate(str));
        }

   public static String validate(String text) 
   {
       int i,f=0,l=0,fi=0,li=0;
       char ch[]=text.toCharArray();
       for(i=0;i<ch.length;i++)
       {
           if(ch[i]=='a')
           {
               f=1;
               fi=i;
           }
           else if(ch[ch.length-1]=='z')
           {
               l=1;
               li=i;
           }
       }
        if(f==1)
        {
            System.out.println("a is found in zeroth index");
        }
        else 
        {
            System.out.println("a is not found in zeroth index");
        }
        if(l==1)
        {
            System.out.println("z is found in last index");
        }
        else 
        {
            System.out.println("z is not found in last index");
        }
	   if (text.matches("a.*?z$"))
                return "Found a match!";
       else
                return "Not matched!";
   }
}
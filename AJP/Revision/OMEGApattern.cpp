// You are using Java
import java.util.*;
class OMEGApattern{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        String a=in.nextLine();
        int l=a.length()-1;
        for(int i=0;i<a.length();i++){
            for(int j=0;j<a.length();j++){
                if(i==j)
                System.out.print(a.charAt(i));
                else if(i+j==l)
                System.out.print(a.charAt(l-i));
                else
                System.out.print(" ");
            }
            System.out.println();
        }
    }
}
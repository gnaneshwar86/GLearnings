// You are using Java
import java.util.*;
import java.io.*;
class Main{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        String s=in.next();
        int n=in.nextInt();
        int a[]=new int[n];
        for(int i=0;i<n;i++)
        a[i]=in.nextInt();
        int k=in.nextInt();
        try{
            System.out.println("Parsed number: "+ Integer.parseInt(s));
            System.out.println("Element at index: "+ a[k]);
        }
        catch(NumberFormatException e){
            System.out.println("Invalid number format.");
        }
        catch(ArrayIndexOutOfBoundsException e){
            System.out.println("Invalid index.");
        }
    }
}
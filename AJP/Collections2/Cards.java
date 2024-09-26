// You are using Java
import java.util.*;
import java.lang.*;
import java.io.*;


class Card {
    String s;
    int num;
    Card(String s,int num){
        this.s=s;
        this.num=num;
    }

}
public class Cards
{
	
	public static void main (String[] args)
	{
	    Scanner in=new Scanner(System.in);
	    int c=0;
	    TreeSet<Card>a=new TreeSet<>((m,n)->m.s.compareTo(n.s));
	    while(a.size()<4){
	        a.add(new Card(in.next(),in.nextInt()));
	        c++;
	    }
	    System.out.println("Four symbols gathered in "+c+" cards");
	    System.out.println("Cards in Set are:");
	    for(Card i:a){
	        System.out.println(i.s+" "+i.num);
	    }
	}
}
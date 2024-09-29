// You are using Java
import java.util.*;
class Card{
    String symbol;
    int num;
    Card(String symbol,int num){
        this.symbol=symbol;
        this.num=num;
    }
}
class CardComp implements Comparator<Card>{
    @Override
    public int compare(Card c1,Card c2){
        return c1.symbol.compareTo(c2.symbol);
    }
}
public class Cards4{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        int c=0;
        TreeSet<Card> a=new TreeSet<Card>(new CardComp());
        while(a.size() < 4){
            a.add(new Card(in.nextLine(),Integer.parseInt(in.nextLine())));
            c++;
        }
        System.out.println("Four symbols gathered in "+c+" cards");
        System.out.println("Cards in set are:");
        for(Card i:a){
            System.out.println(i.symbol+" "+i.num);
        }
    }
}
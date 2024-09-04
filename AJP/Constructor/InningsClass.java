// You are using Java
import java.util.*;
class Innings{
    String battingteam;
    long runs;
    Innings(String battingteam,long runs){
        this.battingteam=battingteam;
        this.runs=runs;
    }
    void display(){
        System.out.println("BattingTeam : "+battingteam);
        System.out.println("Runs scored : "+runs);
    }
}
public class InningsClass
{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        Innings a[]=new Innings[2];
        for(int i=0;i<2;i++){
            a[i]=new Innings(in.next(),in.nextInt());
        }
        for(int i=0;i<2;i++){
            System.out.println("Innings "+(i+1)+" Details");
            a[i].display();
        }
    }
}
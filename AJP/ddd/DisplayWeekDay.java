// You are using Java
import java.util.*;
class Day{
    int n;
    Day(int a){
        n=a;
    }
    String week(){
        switch(n){
            case 1:
                return "Sunday";
            case 2:
                return "Monday";
            case 3:
                return "Tuesday";
            case 4:
                return "Wednesday";
            case 5:
                return "Thursday";
            case 6:
                return "Friday";
            case 7:
                return "Saturday";
            case 0:
                return "Weekend";
            default:
                return "Invalid";
        }
    }
}
public class DisplayWeekDay{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        Day a=new Day(n);
        System.out.println(a.week());
    }
}
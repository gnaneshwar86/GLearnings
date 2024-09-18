// You are using Java
import java.util.*;
class RemoveConsecutiveVowels{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        String a=in.nextLine();
        for(int i=0;i<a.length();i++){
            char c=a.charAt(i);
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
                if(a.length()-1>i&&c==a.charAt(i+1)){
                    continue;
                }
            }
            System.out.print(c);
        }
    }
}
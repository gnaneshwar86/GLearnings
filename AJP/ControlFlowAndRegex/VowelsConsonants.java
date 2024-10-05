// You are using Java
import java.util.*;
public class VowelsConsonants{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        String a=in.nextLine();
        System.out.println("Original String: "+a);
        String s1=a.replaceAll("(?i)[aeiou]","");
        String s2=a.replaceAll("(?i)[^aeiou]","");
        System.out.println("Separate consonants and vowels of the said string: "+s1+s2);
    }
}
import java.util.*;
import java.io.*;

class DotException extends Exception{
    DotException(String a){
        super(a);
    }
}
class AtTheRateException extends Exception{
    AtTheRateException(String a){
        super(a);
    }
}
class DomainException extends Exception{
    DomainException(String a){
        super(a);
    }
}

class Main{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        String a=in.nextLine();
        try{
            int c=0,d=0;
            for(int i=0;i<a.length();i++){
                if(a.charAt(i)=='.')c++;
                if(a.charAt(i)=='@')d++;
            }
            if(c!=1){
                throw new DotException("DotException: Invalid Dot usage\n");
            }
            if(d!=1){
                throw new AtTheRateException("AtTheRateException: Invalid @ usage\n");
            }
            if(!(a.endsWith(".in")||a.endsWith(".com")||a.endsWith(".net")||a.endsWith(".biz"))){
                throw new DomainException("DomainException: Invalid Domain\n");
            }
            System.out.println("Valid email address");
            
        }
        catch(DotException e){
            System.out.println(e.getMessage()+"Invalid email address");
        }
        catch(AtTheRateException e){
            System.out.println(e.getMessage()+"Invalid email address");
        }
        catch(DomainException e){
            System.out.println(e.getMessage()+"Invalid email address");
        }
    }
}
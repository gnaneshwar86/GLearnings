// You are using Java
import java.util.*;
import java.io.*;
class InsufficientFundsException extends Exception{
    InsufficientFundsException(String a){
        super(a);
    }
}
class NegativeAmountException extends Exception{
    NegativeAmountException(String a){
        super(a);
    }
}
class BankAccount{
    double cur=500.0;
    void deposit(double amt)throws NegativeAmountException{
            if(amt<0){
                throw new NegativeAmountException("Exception caught: Deposit amount cannot be negative.");
            }
            cur+=amt;
    }
    void withdrawal(double amt)throws InsufficientFundsException,NegativeAmountException{
            if(cur<amt){
                throw new InsufficientFundsException("Exception caught: Insufficient funds for withdrawal.");
            }
            if(amt<0){
                throw new NegativeAmountException("Exception caught: Withdrawal amount cannot be negative.");
            }
            cur-=amt;
    }
}
class Main{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        BankAccount a=new BankAccount();
        try{
            a.deposit(in.nextDouble());
            System.out.println("Deposit successful. Current balance: "+a.cur);
            a.withdrawal(200.0);
            System.out.println("Withdrawal successful. Current balance: "+a.cur);
            a.withdrawal(2000.0);
        }catch(InsufficientFundsException e){
            System.out.println(e.getMessage());
        }catch(NegativeAmountException e){
            System.out.println(e.getMessage());
        }
        
        try{
            a.deposit(-200);
        }catch(NegativeAmountException e){
            System.out.println(e.getMessage());
        }
        
        try{
            a.withdrawal(-100.0);
        }catch(InsufficientFundsException e){
            System.out.println(e.getMessage());
        }catch(NegativeAmountException e){
            System.out.println(e.getMessage());
        }
    }
}
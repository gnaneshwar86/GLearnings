// You are using Java
import java.util.*;
interface Product
{
    void ProductDetails(Scanner r);
    void show_Bill();
    // Fill your code
}
public class CustomerDetailsProduct
{
    int id;
    String na;

    void getdetails(Scanner r)
    {    
        id=r.nextInt();
        na=r.next();
        // Fill your code
    }
   void showdetails()
   {     
       // Fill your code
       System.out.println("ID:"+id);
       System.out.println("NAME:"+na);
   }
   
}

 class OrderOnline extends Customer implements Product
{
    int n;
    int sum;
    public void ProductDetails(Scanner r1)
    {
        // Fill your code
        n=r1.nextInt();
        sum=0;
        for(int i=0;i<n;i++)
        {
           String o=r1.next();
           int s=r1.nextInt();
            sum+=s;
        }
        
  }
	public void show_Bill(){
	    // Fill your code
	    int d;
	    if(sum<=10000)
	    {
	        System.out.println("Bill:"+sum);
	    }
	    else if(sum>10000&&sum<=30000)
	    {
	        d=(int)(sum+(sum*0.05));
	        System.out.println("Bill:"+d);
	        
	    }
	    else if(sum>30000&&sum<=50000)
	    {
	        d=(int)(sum+(sum*0.07));
	        System.out.println("Bill:"+d);
	        
	        
	    }
	    else if(sum>50000)
	    {
	        d=(int)(sum+(sum*0.09));
	        System.out.println("Bill:"+d);
	    }
	}
	 public static void main(String []arg)
   {
      // Fill your code
      Scanner r=new Scanner(System.in);
      int n1=r.nextInt();
      for(int i=0;i<n1;i++)
      {
          Customer ob=new Customer();
          ob.getdetails(r);
          ob.showdetails();
          OrderOnline ob1=new OrderOnline();
          ob1.ProductDetails(r);
          ob1.show_Bill();
      }
   }
}
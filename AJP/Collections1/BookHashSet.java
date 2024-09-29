// You are using Java
import java.util.*;
class Book{
    int id,quantity;
    String name,author,publisher;
    public Book(int id,String name,String author,String publisher,int quantity){
        this.id=id;
        this.name=name;
        this.author=author;
        this.publisher=publisher;
        this.quantity=quantity;
    }
}
public class BookHashSet{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        LinkedHashSet<Book> a=new LinkedHashSet<Book>();
        int n=Integer.parseInt(in.nextLine());
        for(int i=0;i<n;i++){
            Book b=new Book(Integer.parseInt(in.nextLine()),in.nextLine(),in.nextLine(),in.nextLine(),Integer.parseInt(in.nextLine()));
            a.add(b);
        }
        for(Book i:a){
            System.out.println(i.id+" "+i.name+" "+i.author+" "+i.publisher+" "+i.quantity);
        }
        String s=in.nextLine();
        for(Book i:a){
            if(i.name.contains(s)){
                System.out.println(s+" is present in the set");
                return;
            }
        }
        System.out.println(s+" is not present in the set");
    }
}
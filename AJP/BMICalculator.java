// You are using Java
import java.util.*;
class BMIcalculator{
    private double weight;
    private double height;
    private double bmi;
    private String grade;
    public BMIcalculator(double a,double b){
        weight=a;
        height=b;
    }
    private double calculateBMI(){
        bmi=(weight/(height*height));
        return bmi;
    }
    private String calculateGrade(){
        if(bmi<18.5)
        grade="U";
        else if(bmi>=18.5 && bmi<25.0)
        grade="N";
        else if(bmi>=25.0 && bmi<30.0)
        grade="H";
        else if(bmi>=30.0)
        grade="O";
        return grade;
    }
    public void displayBMI(){
        calculateBMI();
        calculateGrade();
        System.out.println(grade);
    }
}
public class BMICalculator{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        double w=in.nextDouble();
        double h=in.nextDouble();
        BMIcalculator a=new BMIcalculator(w,h);
        a.displayBMI();
    }
}
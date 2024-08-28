import java.util.*;
class Teacher{
    double calculateSalary(double a){
        return a;
    }
}
class FullTimeTeacher extends Teacher{
    String Fname;
    double Fsal,Fbon;
    FullTimeTeacher(String Fname,double Fsal,double Fbon){
        this.Fname=Fname;
        this.Fsal=Fsal;
        this.Fbon=Fbon;
    }
    double calculateSalary(){
        return Fsal+Fbon;
    }
}
class PartTimeTeacher extends Teacher{
    String Pname;
    double Psal,Pbon;
    PartTimeTeacher(String Pname,double Psal,int Pbon){
        this.Pname=Pname;
        this.Psal=Psal;
        this.Pbon=(double)Pbon;
    }
    double calculateSalary(){
        return this.Psal*this.Pbon;
    }
}class TeacherSalaryCalculator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String fullTimeTeacherName = scanner.nextLine();
        double fullTimeTeacherBasicSalary = scanner.nextDouble();
        double fullTimeTeacherBonus = scanner.nextDouble();
        scanner.nextLine();
        String partTimeTeacherName = scanner.nextLine();
        double partTimeTeacherHourlyRate = scanner.nextDouble();
        int partTimeTeacherHoursWorked = scanner.nextInt();

        FullTimeTeacher fullTimeTeacher = new FullTimeTeacher(fullTimeTeacherName, fullTimeTeacherBasicSalary, fullTimeTeacherBonus);
        PartTimeTeacher partTimeTeacher = new PartTimeTeacher(partTimeTeacherName, partTimeTeacherHourlyRate, partTimeTeacherHoursWorked);
        System.out.printf("Full-Time Teacher Salary: %.2f%n", fullTimeTeacher.calculateSalary());
        System.out.printf("Part-Time Teacher Salary: %.2f%n", partTimeTeacher.calculateSalary());
    }
}
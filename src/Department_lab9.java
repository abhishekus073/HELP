import java.util.Scanner;
//Write a program to calculate bonus for different departments using method overriding.
abstract class Department {
    double salary,bonus,totalSalary;
    public abstract  void calBonus(double salary);
    public void displaytotalSalry(String dept)
    {

        System.out.println(dept+" "+salary+"  "+bonus+"  "+totalSalary);
    }
}
class Account extends Department
{
    public void calBonus(double sal)
    {
        salary=sal;
        bonus=sal*0.2;
        totalSalary=salary+bonus;
    }
}
class sales extends Department
{
    public void calBonus(double sal)
    {
        salary=sal;bonus=sal*0.3;
        totalSalary=salary+bonus;
    }
}
public class Department_lab9 //main class
{
    public static void main(String[] arr)
    {
        long sal,bol;
        Department acc=new Account();
        Department sales=new sales();


        Scanner myObj = new Scanner(System.in);
        System.out.println("Enter the Account salary :" );
         sal = myObj.nextInt();

        Scanner myObj1 = new Scanner(System.in);
        System.out.println("Enter the  salary :" );
         bol = myObj1.nextInt();

        acc.calBonus(sal);
        sales.calBonus(bol);

        System.out.println("Department  Basic salary  Bonus  total salary");
        System.out.println();
        acc.displaytotalSalry("Account dept  ");
        sales.displaytotalSalry("Sales dept    ");
        System.out.println();
    }
}

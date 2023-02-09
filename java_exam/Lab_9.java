//Write a program to calculate bonus for different departments using method overriding.
import java.util.Scanner;
abstract class Department {
    double salary,bonus,totalSalary;
    public abstract  void calBonus(double salary);
    public void displaytotalSalry(String dept)
    {

        System.out.println(dept+"\t"+salary+"\t"+bonus+"\t"+totalSalary);
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
        salary=sal;
        bonus=sal*0.3;
        totalSalary=salary+bonus;
    }
}
public class Lab_9 //main class
{
    public static void main(String[] arr)
    {
        long sal,bol;
        Department acc=new Account();
        Department sales=new sales();


        Scanner myObj = new Scanner(System.in);
        System.out.println("Enter the Account salary :" );
        sal = myObj.nextInt();

        System.out.println("Enter the   sales salary :" );
        bol = myObj.nextInt();

        acc.calBonus(sal);
        sales.calBonus(bol);

        acc.displaytotalSalry("Account dept  ");
        sales.displaytotalSalry("Sales dept    ");

    }
}
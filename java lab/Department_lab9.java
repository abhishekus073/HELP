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
public class Department_lab9
{
    public static void main(String[] arr)
    {
        Department acc=new Account();
        Department sales=new sales();
        acc.calBonus(10000);
        sales.calBonus(20000);

        System.out.println("Department  Basic salary  Bonus  total salary");
        System.out.println();
        acc.displaytotalSalry("Account dept  ");
        sales.displaytotalSalry("Sales dept    ");
        System.out.println();
    }
}

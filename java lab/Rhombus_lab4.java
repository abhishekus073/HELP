//Write a program to implement Rhombus pattern reading the limit form user
import java.util.Scanner;
public class Rhombus_lab4
{
    public static void main(String args[])
    {
        int i,j,n;
        char c;
        Scanner r = new Scanner(System.in);
            System.out.println("Enter the limit :");
        n=r.nextInt();
        System.out.println("enter symbol");
        c=r.next().charAt(0);


         for(i=1;i<=n;i++){
             for(j=1;j<=n-i;j++){
                 System.out.print("  ");

             }
             for(j=1;j<=n;j++){
                 System.out.print(c);
             }
             System.out.println();
         }
    }
}
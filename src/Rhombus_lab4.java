//Write a program to implement Rhombus pattern reading the limit form user
import java.util.Scanner;
public class Rhombus_lab4
{
    public static void main(String args[])
    {
        int i,j,n;
        Scanner r = new Scanner(System.in);
            System.out.println("Enter the limit :");
        n=r.nextInt();
         for(i=1;i<=n;i++){
             for(j=1;j<=n-i;j++){
                 System.out.print("  ");
             }
             for(j=1;j<=n;j++){
                 System.out.print("* ");
             }
             System.out.println();
         }
    }
}

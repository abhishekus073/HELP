//Write a program to sort list of elements in ascending and descending order and show the exception handling.
import java.util.Scanner;
public class ascending_descending_lab3
{
    public static void main(String[] args)
    {
//creating an instance of an array
        int n;
        Scanner sc=new Scanner(System.in);
        try {
            System.out.print("Enter the number of elements :");
            //reading the number of elements from the that we want to enter
            n=sc.nextInt();
            //creates an array in the memory of length 10
            int[] arr= new int[10 ];
            System.out.println("Please Enter " + n + " Numbers ");
            for (int i = 0; i < n; i++) {
                //reading array elements from the user
                arr[i] = sc.nextInt();
            }
            System.out.println("After Sorting");
            System.out.println("Ascending order");
            //sorting logic
            for (int i = 0; i < n; i++) {
                for (int j = i + 1; j < n; j++) {
                    int tmp = 0;
                    if (arr[i] > arr[j]) {
                        tmp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = tmp;
                    }
                }
                System.out.print(" "+arr[i]);
            }
            System.out.println("\n\nDescending order ");
            for(int i=n-1;i>=0;i--)
                System.out.print(" "+arr[i]);
        }
        catch(NumberFormatException e)
        {
            System.out.println("Enter only integers"+e);
        }
        catch(Exception excption)
        {
            System.out.println("Error occured "+excption);
        }
    }
}
//Write a program to find factorial of list of number reading input as command line argument.
import java.util.Scanner;
public class FactorialDemo_lab1 {
    public static void main(String[] args) {
        // Create a Scanner object
        Scanner myObj = new Scanner(System.in);
        System.out.println("Enter the number :" );
        int number = myObj.nextInt(); // Reading user input
        int  factorial = 1;
        for (int i = 1; i <= number; i++) {
            factorial = factorial * i;

        }
        System.out.println("Factorial of " + number + " is : " + factorial);
    }
}





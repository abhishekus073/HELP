//Write a program to find area of geometrical figures using method.
import java.util.Scanner;
class Lab_7 {
    public static double circleArea(double r)
    {
        return Math.PI * r * r;
    }
    public static double squareArea(double side)
    {
        return side * side;
    }
    public static double rectArea(double width, double height)
    {
        return width * height;
    }
    public static double triArea(double base, double height1)
    {
        return 0.5 * base * height1;
    }


    public static void main(String args[]) {
        Scanner myObj = new Scanner(System.in);

        System.out.println("Enter the radius");
        int radius = myObj.nextInt();
        System.out.println("Area of circle = " + circleArea(radius));

        System.out.println("Enter the side");
        int side = myObj.nextInt();
        System.out.println("Area of square = " + squareArea(side));

        System.out.println("Enter the Width");
        int width = myObj.nextInt();
        System.out.println("Enter the height");
        int height = myObj.nextInt();
        System.out.println("Area of Rectangle = " + rectArea(width, height));

        System.out.println("Enter the Base");
        int base = myObj.nextInt();
        System.out.println("Enter the Height");
        int height1 = myObj.nextInt();
        System.out.println("Area of traingle =" + triArea(base, height1));
    }
}
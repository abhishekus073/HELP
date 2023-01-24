//Write a program to find area of geometrical figures using method.
import java.io.*;

class a {
    public static double circleArea(double r)
    {
        return Math.PI * r * r;
    }
    public static double squareArea(double side)
    {
        return side * side;
    }
    public static double Parallelogram(double width, double height)
    {
        return width * height;
    }
    public static double triArea(double base, double height1)
    {
        return 0.5 * base * height1;
    }
    public static String readLine() {
        String input = " ";
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        try {
            input = in.readLine();
        } catch (Exception e) {
            System.out.println("Error" + e);
        }
        return input;
    }
    public static void main(String args[]) {
        System.out.println("Enter the radius");
        Double radius = Double.parseDouble(readLine());
        System.out.println("Area of circle = " + circleArea(radius));
        System.out.println("Enter the side");
        Double side = Double.parseDouble(readLine());
        System.out.println("Area of square = " + squareArea(side));
        System.out.println("Enter the Width");
        Double width = Double.parseDouble(readLine());
        System.out.println("Enter the height");
        Double height = Double.parseDouble(readLine());
        System.out.println("Area of Parallelogram = " + Parallelogram(width, height));
        System.out.println("Enter the Base");
        Double base = Double.parseDouble(readLine());
        System.out.println("Enter the Height");
        Double height1 = Double.parseDouble(readLine());
        System.out.println("Area of traingle =" + triArea(base, height1));
    }
}



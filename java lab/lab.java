import java.util.*;
public class lab {
    public static void main(String[] args) {
        Scanner ed = new Scanner(System.in);
        Integer[] arr = new Integer[5];
        int i,n;
        try {
            System.out.print("Enter the number of elements :");
            //reading the number of elements from the that we want to enter
            n = ed.nextInt();
            System.out.println("Please Enter 5 elements in the Array : ");
            for (i = 0; i < n; i++) {
                arr[i] = ed.nextInt();
            }
            System.out.println("After Sorting");
            Arrays.sort(arr);
            System.out.println("Sorted Array in Ascending Order " + Arrays.toString(arr));

            Arrays.sort(arr, Comparator.reverseOrder());
            System.out.println("Sorted Array in Descending Order " + Arrays.toString(arr));
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
//6.Write a program in java to generate an abstract class
//A also class B inherits the class A. Generate the object for B and display the text “Call me from B”.
abstract class A// perent class
{
    abstract void call();   //Abstract method
}
// child class and inheriting the perent class in chaild class
class B extends A
{
    public void call()

    {
        System.out.println("call me from B");
    }

    public static void main(String arr[])//main method
    {
        B b=new B(); //Creating the object
        b.call();
    }
}
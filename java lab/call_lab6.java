//Write a program in java to generate an abstract class A also class B inherits the class A.generate the object for class B and display the text “call me from B”.
abstract class A
{
    abstract void call_lab6();
}
class B extends A
{
    public void call_lab6()
    {
        System.out.println("call me from B");
    }
    public static void main(String arr[])
    {
        B b=new B();
        b.call_lab6();
    }
}

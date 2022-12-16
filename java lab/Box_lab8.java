//Write a program to implement constructor overloading by passing different number of Parameter of different types.
        package com.company;
public class Box_lab8
{
    int length,breadth,height;
    Box_lab8()
    {
        length=breadth=height=2;
        System.out.println("Intialized with default constructor");
    }
    Box_lab8(int l, int b)
    {
        length=l;
        breadth=b;
        height=2;
        System.out.println("Initialized with parameterized constructor having 2 params");
    }
    Box_lab8(int l, int b, int h)
    {
        length=l;
        breadth=b;
        height=h;
        System.out.println("Initialized with parameterized constructor having 3 params");
    }
    public int getVolume()
    {
        return length*breadth*height;
    }

    public static void main(String args[])
    {
        Box_lab8 box1 = new Box_lab8();
        System.out.println("The volume of Box 1 is :"+ box1.getVolume());
        Box_lab8 box2 = new Box_lab8(10,20);
        System.out.println("Volume of Box 2 is :" + box2.getVolume());
        Box_lab8 box3 = new Box_lab8(10,20,30);
        System.out.println("Volume of Box 3 is :" + box3.getVolume());
    }
}
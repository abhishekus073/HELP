// 8) Write C++ programs that illustrate how the following forms of inheritance are supported:
// a)Single inheritance
// b)Multiple inheritance
// c)Multi level inheritance
// d)Hierarchical inheritance.
#include <iostream>
#include <cmath>
using namespace std;
class top
{
public:
    int a;
    void getdata()
    {
        cout << "Enter the Number : ";
        cin >> a;
    }
};
class middle : public top
{ // single inheritance
public:
    int b;
    void square()
    {
        getdata();
        b = a * a;
        cout << "Square of " << a << " is :" << b;
    }
};
class bottom : public middle
{ // Multi level inheritance
public:
    int c;
    void cube()
    {
        square();
        c = b * a;
        cout << "\nCube of " << a << " is :" << c;
    }
};
class Squareroot
{
public:
    int num;
    void root(int num)
    {
        cout << "\nSquare root of " << num << " is : " << sqrt(num);
    }
};
class result : public Squareroot, public bottom
{ // Multiple inheritance
public:
    int x;
    void display()
    {
        cube();
        x = a;
        root(x);
    }
};
int main()
{
    result b1;
    b1.display();
    return 0;
}

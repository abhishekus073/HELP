// 9. a)  Write a C++ program that illustrates the order of execution of constructors and destructors when new
// class derived from more than one base class.
#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout << "\n zero argument constructor of base class a";
    }
    ~A()
    {
        cout << "\n destructor of base class A";
    }
};
class B
{
public:
    B()
    {
        cout << "\n zero argument constructor of base class b";
    }
    ~B()
    {
        cout << "\n destructor of base class b";
    }
};
class C : public A,B
{
public:
    C()
    {
        cout << "\n zero argument constructor of desired class c";
    }
    ~C()
    {
        cout << "\n destructor of class C";
    }
};
int main()
{
    C obj;
}

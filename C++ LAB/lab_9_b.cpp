// b)	Write a Program to Invoking Derived Class Member Through Base Class Pointer.

#include <iostream>
using namespace std;
class A
{
public:
    virtual void print_me()
    {
        cout << "I'm Base A" << endl;
    }
};
class B : public A
{
public:
    void print_me()
    {
        cout << "I'm Derived class B" << endl;
    }
};
class C : public A
{
public:
    void print_me()
    {
        cout << "I'm Derived class C" << endl;
    }
};
int main()
{
    A a;
    B b;
    C c;
    A *p = &a;
    p->print_me();
    p = &b;
    p->print_me();
    p = &c;
    p->print_me();
    return 0;
}

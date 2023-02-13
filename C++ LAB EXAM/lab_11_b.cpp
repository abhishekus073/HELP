// b)	Write a Program to Demonstrate the Catching of All Exceptions.

#include <iostream>
using namespace std;
int main()
{
    try
    {
        throw 10;
    }
    catch (char excp)
    {
        cout << "Caught " << excp;
    }
    catch (...)
    {
        cout << "Default Exception\n";
    }
    return 0;
}

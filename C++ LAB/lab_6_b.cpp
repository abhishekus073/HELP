// b)	Write a Program to Generate Fibonacci Series use Constructor to Initialize the Data Members.

#include <iostream>
using namespace std;
class fibonacci
{
    int n1, n2;

public:
    fibonacci()
    {
        n1 = 0;
        n2 = 1;
    }
    void series(int n)
    {
        int i, next;
        cout << n1 << " " << n2 << " ";
        for (i = 1; i <= n - 2; i++)
        {
            next = n1 + n2;
            cout << next << " ";
            n1 = n2;
            n2 = next;
        }
    }
};
int main()
{
    fibonacci fib;
    int n;
    cout << "FIBONACCI SERIES " << endl;
    cout << "How many numbers do you want ? ";
    cin >> n;
    fib.series(n);
}

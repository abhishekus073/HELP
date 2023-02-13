// b)	Write a Program to Generate Fibonacci Series use Constructor to Initialize the Data Members.
#include <iostream>
using namespace std;
class fibonacci
{
    int n0, n1;

public:
    fibonacci()
    {
        n0 = 0;
        n1 = 1;
    }
    void series(int n)
    {
int next,count=0;
while(count<n){
cout<<n0<<"\t";
count++;
next=n0+n1;
n0=n1;
n1=next;
}}
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
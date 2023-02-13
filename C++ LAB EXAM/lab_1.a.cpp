 //Write a C++ program to find the sum of individual digits of a positive integer.
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, remainder;
    cout << "Enter a positive integer: ";
    cin >> n;

    while (n != 0) {
        remainder = n % 10;
        sum =sum + remainder;
        n =n/ 10;
    }

    cout << "The sum of the digits is: " << sum << endl;
    return 0;
}
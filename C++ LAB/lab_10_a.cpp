// 10. a) Write a Template Based Program to Sort the Given List of Elements.

#include <iostream>
using namespace std;
template <class T>
void bubble(T a[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                T temp;
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int a[6] = {99, 58, 75, 33, 29, 11};
    char b[4] = {'z', 'f', 'x', 'a'};
    bubble(a, 6);
    cout << "\nSorted Order Integers: ";
    for (int i = 0; i < 6; i++)
        cout << a[i] << " ";
    bubble(b, 4);
    cout << "\nSorted Order Characters: ";
    for (int j = 0; j < 4; j++)
        cout << b[j] << " ";
}

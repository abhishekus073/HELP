//Write a Program to illustrate New and Delete Keywords for dynamic memory allocation.
#include <iostream>
using namespace std;
int main(){
int* p1,*p2,sum;
p1 = new int;
p2 = new int;
cout<<"Enter the first number: ";
cin>>*p1;
cout<<"Enter the Second number: ";
cin>>*p2;
sum = *p1+*p2;
cout<<"Sum of value are: "<<sum<<endl;
delete p1;
delete p2;
return 0;
}

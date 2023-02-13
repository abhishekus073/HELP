// Write a C++ Program to generate first n terms of Fibonacci sequence.
#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter How many terms to be printed:";
cin>>n;{
int n0,n1,next,count=0;
n0=0;
n1=1;
while(count<n){
cout<<n0<<"\t";
count++;
next=n0+n1;
n0=n1;
n1=next;
}
}
}
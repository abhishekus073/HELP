// Write a C++ Program to generate first n terms of Fibonacci sequence.
#include<iostream>
using namespace std;
void fib(int n){
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
int main(){
int terms;
cout<<"Enter How many terms to be printed:";
cin>>terms;
fib(terms);
return 0;
}




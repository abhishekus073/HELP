//Write a C++ program to generate all the prime numbers between 1 and n, where n is a value supplied by the user.
#include<iostream>
using namespace std;
void prime(int n){
int factors;
cout<<"prime numbers are... ";                                               
for(int i=2;i<=n;i++){
factors=0;
for(int j=1;j<=i;j++){
if(i%j==0)
factors=factors+1;
}
if(factors<=2)
cout<<i<<" ";
}
}
int main(){
int n;
cout<<"Enter a integer value:";
cin>>n;
prime(n);
return 0;
}

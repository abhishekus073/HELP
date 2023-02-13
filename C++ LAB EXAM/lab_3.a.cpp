//Write a C++ program to sort a list of numbers in ascending order.
#include <iostream>
using namespace std;
int main(){
int arr[100];
int size,i,j,temp;
cout<<"Enter the size of an array: ";
cin>>size;
cout<<"Enter the elements of an array: ";
for(i=0; i<size; i++){
cin>>arr[i];
}
for(i=0; i<size; i++){
for(j=i+1;j<size; j++){
if(arr[j]<arr[i]) {
temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
}
} }
cout<<"Elements of an array in sorted order :";
for(i=0;i<size;i++){
cout<<arr[i]<<" ";
}
return 0;
}

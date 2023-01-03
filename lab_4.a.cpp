// Write a program Illustrating Class Declarations, Definition, and Accessing Class Members.
#include<iostream>
using namespace std;
class simple{
private: int a;
char b;
float c;
public:
void get_data(){
cout<<"Enter an integer value:";
cin>>a;
cout<<"Enter a character:";
cin>>b;
cout<<"Enter a float value:";
cin>>c;
}
void print_data(){
cout<<"\nValues read from keyboard are\n";
cout<<"Integer value:"<<a<<endl;
cout<<"character is :"<<b<<endl;
cout<<"float value is :"<<c<<endl;
}
};
int main(){
simple s;
s.get_data();
s.print_data();
}

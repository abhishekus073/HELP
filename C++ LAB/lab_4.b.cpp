//Program to illustrate default constructor, parameterized constructor and copy constructors.
#include <iostream>
using namespace std;
class code{
int id;
int count;
public: code(){
cout << "Default constructor called\n";
id = 0;
cout << "id=" << id << endl;
}
code(int a) {
cout << "Parameterized constructor called\n";
id = a;
cout << "id=" << id << endl;
}
code(code& x) {
cout << "copy constructor called\n";
id = x.id;
cout << "id=" << id << endl;
}
~code(){
cout << "Object Destroyed" ;
cout << " id=" << id << endl;
}
};
int main(){
code d;
code a(5);
code b=a;
return 0;
}

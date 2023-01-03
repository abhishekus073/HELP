//Write a Program to Demonstrate Friend Function and Friend Class.
#include <iostream>
using namespace std;
class ClassB;
class ClassA {
private: int numA;
friend class ClassB;
public: ClassA(){
numA = 12;
}
};
class ClassB {
private: int numB,sum;
public: ClassB(){
numB=5;
sum=0;
}
void add(){
ClassA objectA;
cout<<"NumA = "<<objectA.numA<<endl;
cout<<"NumB = "<<numB<<endl;
sum= objectA.numA + numB;
}
friend int sum(ClassB);
};
int sum(ClassB b){
cout<<"Sum of Number is: "<<b.sum;
}
int main(){
ClassB objectB;
objectB.add();
sum(objectB);
return 0;
}

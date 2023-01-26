//6. a) Write a Program to Access Members of a STUDENT Class Using Pointer to Object Members. 
#include <iostream>
using namespace std;
class Student{
	private:
            int Regno;
            char name[20];
	public: Student(){
                		Regno=0;
            	};
            	void inputRegno(){
               		 cout<<"Enter the name: ";
               		 cin>>name;
                		cout<<"Enter an Register number: ";
                		cin>>Regno;
            	}
            	void displayRegno(){
                		cout<<"Name is : "<<name<<endl;
                		cout<<"Register Number is : "<<Regno<<endl;
            	}
};
int main(){
	Student S;
	Student *ptr;
	ptr = new Student; //creating & assigning memory
	ptr->inputRegno();
	ptr->displayRegno();
	return 0;
}

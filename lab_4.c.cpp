// Write a Program to Implement a Class STUDENT having Following Members:
//  Member Description
//  sname Name of the student
//  Marks array Marks of the student
//  total Total marks obtained
//  Tmax Total maximum marks
//  Member functions Member Description
//   assign () Assign Initial Values
//   compute () to Compute Total, Average
//   display () to Display the Data.
#include <iostream>
using namespace std;
class student
{
    char sname[50];
    float marks[6];
    float total;
    float max_marks;

public:
    void assign();
    void compute();
    void display();
};
void student::assign()
{
    cout << endl
         << "Enter Student Name :";
    cin >> sname;
    for (int i = 0; i < 6; i++)
    {
        cout << "Enter marks of subject :" << i + 1 << " : ";
        cin >> marks[i];
    }
    cout << "Enter Maximum total marks :";
    cin >> max_marks;
}
void student::compute()
{
    total = 0;
    for (int i = 0; i < 6; i++)
        total += marks[i];
}
void student::display()
{
    cout << "Student Name:" << sname << endl;
    cout << "Marks are\n";
    for (int i = 0; i < 6; i++)
        cout << "Subject " << i + 1 << ": " << marks[i] << endl;
    cout << " -------------------\n";
    cout << "Total :" << total << endl;
    cout << " -------------------\n";
    float per;
    per = (total / max_marks) * 100;
    cout << "Percentage:" << per;
}
int main()
{
    student obj;
    obj.assign();
    obj.compute();
    obj.display();
    return 0;
}




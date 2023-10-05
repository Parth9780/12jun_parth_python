/* Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance) */

#include<iostream>
using namespace std;
class person
{
    public:
        string name;
        int age;
        int getdata()
        {
            cout<<"Enter your name: ";
            cin>>name;
            cout<<"Enter your age: ";
            cin>>age;
        }
        void display()
        {
            cout<<"Your Name is: "<<name<<endl;
            cout<<"Your Age is :" <<age<<endl;
        }
};
class student
{
    public:
        float percentage;
        int getdata1()
        {
            cout<<"Enter your percentage: ";
            cin>>percentage;
        }
        void display1()
        {
            cout<<"Your percentage is : "<<percentage<<endl;
        }
};
class teacher : public student,person
{
    public:
        int salary;
        void getdata2()
        {
            cout<<"Enter your salary: ";
            cin>>salary;
        }
        void display2()
        {
            cout<<"Your Salary is: "<<salary<<endl;
        }
};
int main()
{
    teacher obj;
    obj.getdata();
    obj.getdata1();
    obj.getdata2();
    
    obj.display();
    obj.display1();
    obj.display2();
    return 0;
}
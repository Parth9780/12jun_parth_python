/* Assume that the test results of a batch of students are stored in three different
classes. Class Students are storing the roll number. Class Test stores the marks
obtained in two subjects and class result contains the total marks obtained in
the test. The class result can inherit the details of the marks obtained in the
test and roll number of students. (Multilevel Inheritance)  */

#include<iostream>
using namespace std;
class students
{
    public:
        int roll_no;
        int roll()
        {
            cout<<"Enter your roll no: ";
            cin>>roll_no;
        }
};
class test : public students
{
    public:
        int m1,m2;
        int mark()
        {
            cout<<"Enter the 1.subject marks: ";
            cin>>m1;
            cout <<"Enter the 2.subject marks: ";
            cin>>m2;
        }
};
class result : public test
{
    public:
        int total;
        int total()
        {
            total = m1+m2;
            cout<<"Your Total Marks is : "<<total;
        }
};
int main()
{
    students ob;
    ob.roll();
    ob.mark();
    ob.total();
    return 0;
}
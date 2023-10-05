/* Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading */

#include<iostream>
using namespace std;
class math
{
    public:
        int operation(int a,int b)
        {
            cout<<"Addition is :"<<a+b<<endl;
            cout<<"Subtraction is :"<<a-b<<endl;
        }
        int operation(float a,float b)
        {
            cout<<"Multiplication is :"<<a*b<<endl;
            cout<<"Division is :"<<a/b<<endl;
        }
};
int main()
{
    math obj;
    obj.operation(20,30);
    obj.operation(12.5, 16);
    return 0;
}
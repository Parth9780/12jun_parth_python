/* Write a program of Addition, Subtraction, Division, Multiplication using
constructor.  */

#include<iostream>
using namespace std;
class calculator    //class
{
    public:
        calculator(int x,int y) //parameterized constructor..
        { 
            cout << "Addition of " << x << "+" << y << "=" << x + y << endl;        //addition
            cout << "subtraction of " << x << "-" << y << "=" << x - y << endl;     //subtriction
            cout << "Multiplication of " << x << "*" << y << "=" << x * y << endl;  //multiplication
            cout << "Division of " << x << "/" << y << "=" << x / y << endl;        //division
        }
};
int main()  //main function
{
        int a, b;
        cout << "Enter the tow value: ";
        cin >> a >> b;
        calculator d1(a,b);
        return 0;
}
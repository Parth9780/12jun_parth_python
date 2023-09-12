//WAP to create simple calculator using class
#include<iostream>
using namespace std;
class cal
{
    public:
    int a,b;
    int sum()
    {
        int c = 0;
        cout<<"Enter the value of A and B";
        cin>>a>>b;
        c = a+b;
        cout<<"Addition is = "<<c;
    }
    int sub()
    {
        int c = 0;
        cout << "Enter the value of A and B";
        cin >> a >> b;
        c = a - b;
        cout << "Subtriction is = " <<c;
    }
    int mul()
    {
        int c = 0;
        cout << "Enter the value of A and B";
        cin >> a >> b;
        c = a * b;
        cout << "Multiplication is = " <<c;
    }
    int div()
    {
        int c = 0;
        cout << "Enter the value of A and B";
        cin >> a >> b;
        c = a / b;
        cout << "Division is = " <<c;
    }
    int mod()
    {
        int c = 0;
        cout << "Enter the value of A and B";
        cin >> a >> b;
        c = a % b;
        cout << "Modulo is = " <<c;
    }
};
int main()
{
    cal ob;
    int ch;
    cout<<"1.Addition"<<endl<<"2.Subtriction"<<endl<<"3.Multiplication"<<endl<<"4.Division"<<endl<<"5.Modulo"<<endl;
    cout<<"Enter your choice: ";
    cin>>ch;
    switch(ch)
    {
        case 1:
            ob.sum();
        break;
        case 2:
            ob.sub();
        break;
        case 3:
            ob.mul();
        break;
        case 4:
            ob.div();
        break;
        case 5:
            ob.mod();
        break;
        default:
            cout<<"Plase enter the valid choice...";
    }
    return 0;
}
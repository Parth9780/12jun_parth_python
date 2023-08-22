// WAP to create simple calculator using class

#include<iostream>
using namespace std;
class fun
{
    public:
    fun(int x, int y)
    {
        int ch;
        cout<<"1.addition"<<endl<<"2.subtriction"<<endl<<"3.multiplication"<<endl<<"4.Division"<<endl<<"5.modulo"<<endl<<"Enter your choice :";
        cin>>ch;
        switch (ch)
        {
        case 1:
            cout<<"Addition of the : "<<x+y;
            break;
        case 2:
            cout<<"Subtriction of the :"<<x-y;
            break;
        case 3:
            cout<<"Multiplication of the :"<<x*y;
            break;
        case 4:
            cout<<"Division of the : "<<x/y;
            break;
        case 5:
            cout<<"modulo of the :"<<x%y;
            break;
        default:
            cout<<"Invalid choice..!";
            break;
        }
    }
};
int main()
{
    int a,b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"and b: ";
    cin>>b;
    fun obj(a,b);
    return 0;
}
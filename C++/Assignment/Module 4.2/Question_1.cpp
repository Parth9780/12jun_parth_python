// WAP to create simple calculator using class

#include<iostream>
using namespace std;
class fun   //class
{
    public:
    fun(int x, int y) //perameters
    {
        int ch; //user choice
        cout<<"1.addition"<<endl<<"2.subtriction"<<endl<<"3.multiplication"<<endl<<"4.Division"<<endl<<"5.modulo"<<endl<<"Enter your choice :";
        cin>>ch;
        switch (ch)
        {
        case 1: //addition
            cout<<"Addition of the : "<<x+y;
            break;
        case 2: //subtriction
            cout<<"Subtriction of the :"<<x-y;
            break;
        case 3: //multiplication
            cout<<"Multiplication of the :"<<x*y;
            break;
        case 4: //division
            cout<<"Division of the : "<<x/y;
            break;
        case 5: //modulo
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
    cout<<"Enter the value of a: "; //get the value
    cin>>a; //store the value
    cout<<"and b: ";    //get the value
    cin>>b; //store the value
    fun obj(a,b);//create the object
    return 0;
}
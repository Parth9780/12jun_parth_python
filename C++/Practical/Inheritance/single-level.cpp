#include<iostream>
using namespace std;
class A
{
    public:
        int a,b;
        void get()
        {
            cout<<"Enter the no of a: ";
            cin>>a;
            cout<<"And b: ";
            cin>>b;
            a+=b;
        }
};
class B : public A
{
    public:
        void disp()
        {
            cout<<"The addition is: "<<a;
        }
};
int main()
{
    B ob1;
    ob1.get();
    ob1.disp();
    return 0;
}
#include<iostream>
using namespace std;
class encapsualation
{
    int id;
    string name;
    public:
    encapsualation(int id)
    {
        this -> id = id;
    }
    void disp()
    {
        cout<<"Enter the your name: ";
        cin>>name;
        cout<<name<<"Your id is: "<<id;
    }
};
int main()
{
    encapsualation ep1(56);
    ep1.disp();
}
#include<iostream>
using namespace std;
class base
{
    public:
    int id;
    void getdata()
    {
        cout<<"Enter the your id: ";
        cin>>id;
    };
};
class derived1 : public base
{
    public:
    string name;
    void getdata2()
    {
        cout<<"Enter the your name: ";
        cin>>name;
    }
};
class derived2 : public derived1
{
    public:
    void show()
    {
        cout<<endl<<name<<" Your id is: "<<id;
    }
};
int main()
{
    derived2 d1;
    d1.getdata();
    d1.getdata2();
    d1.show();
    return 0;
}
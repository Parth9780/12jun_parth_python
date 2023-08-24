#include<iostream>
using namespace std;
class fen
{
public:
    int a;
    fen (int no)
    {
        a = no;
    }
    fen(fen &n1)
    {
        a = ++n1.a;
    }
    void disp()
    {
        cout<<"Value of the a is: "<<a<<endl;
    }
};
int main()
{
    fen ob1(33);
    ob1.disp();
    fen ob2 = ob1;
    ob2.disp();
    return 0;
}
#include<iostream>
using namespace std;
class mc
{
    public:
    int x;
    mc()
    {
        cout<<"Enter the value of x: ";
        cin>>x;
    }
    void show()
    {
        cout<<"The number is a : "<<x;
    }
};
int main()
{
    mc kk;
    kk.show();
    return 0;
}
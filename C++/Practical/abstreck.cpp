#include<iostream>
using namespace std;
class abstrac
{
    int id;
    public:
    abstrac(int id)
    {
        this->id = id;
    }
    void disp()
    {
        cout<<"Your id is: "<<id;
    }
};
int main()
{
    abstrac ab(101);
    ab.disp();
    return 0;
}

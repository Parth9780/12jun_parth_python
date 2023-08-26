#include<iostream>
using namespace std;
class fact
{
    public:
        int a,temp=0,i;
        fact()
        {
            cout<<"Enter the n number:";
            cin>>a;
            for(i=a; i>0; i--)
            {
                temp *= i;
            }
        }
        void disp()
        {
            cout<<"The factorial is :"<<temp;
        }
};
int main()
{
        fact ob;
        ob.disp();
        return 0;
}
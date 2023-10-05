/* Write a program to find the max number from given two numbers using
friend function */

#include<iostream>
using namespace std;
class maximum
{
    public:
    int x, y;
    int getvalue()
    {
        cout << "Enter the First value: ";
        cin >> x;
        cout << "Enter the Second value: ";
        cin >> y;
    }
    friend int max(int a, int b);
};
int max(maximum &m)
{
    if (m.x>m.y)
    {
        cout<<" max number is :"<<m.x;
    }
    else if (m.x<m.y)
    {
        cout << " max number is :" << m.y;
    }
    else
    {
        cout<<"X and y is equal";
    }
}
int main()
{
    maximum L1;
    L1.getvalue();
    max(L1);
    return 0;
}
#include <iostream>
using namespace std;
class fact
{
public:
    int a, f, i;
    fact()
    {
        cout << "Enter the n number:";
        cin >> a;
        for (i = a; i > 0; i--)
        {
            f *= i;
        }
        cout << "The factorial is :" << f;
        ls
    }
    void disp()
    {
    }
};
int main()
{
    fact ob;
    ob.disp();
    return 0;
}
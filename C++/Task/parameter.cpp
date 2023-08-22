#include <iostream>
using namespace std;
class add
{
public:
    add(int a, int b)
    {
        cout << "The addition is :" << a + b;
    }
};
int main()
{
    int x, y;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "and y: ";
    cin >> y;
    add obj(x, y);
    return 0;
}
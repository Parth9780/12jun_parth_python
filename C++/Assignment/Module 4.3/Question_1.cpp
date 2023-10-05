/* Write a program of to swap the two values using templates */

#include<iostream>
using namespace std;
template <class T>  //create template
int Swap(T& x, T& y)
{
    T t;
    t = x;
    x = y;
    y = t;
    return 0;
}
int main()
{
    int a, b;
    a = 10, b = 20;
    cout << ".................................Before Swaping................................" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    // Swap the value
    Swap(a ,b);
    cout << ".................................After Swaping................................" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}
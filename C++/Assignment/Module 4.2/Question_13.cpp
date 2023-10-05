/* Write a program to swap the two numbers using friend function without
using third variable  */

#include<iostream>
using namespace std;
class swapping
{
    public:
    int a, b;
    int get()   //get the value
    {
        cout<<"Enter the First value: ";
        cin>>a;
        cout<<"Enter the Second value: ";
        cin>>b;
        /* Before swaping value */
        cout<<".................................Before Swaping................................"<<endl;
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
    friend void swap(int x,int y);  //Declare frinend function
    void display()  //Display value
    {
        /* After Swaping the value */
        cout << ".................................After Swaping................................" << endl;
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};
void swap(swapping &T)  // friend function
{
    T.a = T.a + T.b;    //swap tow number without using threed vareable
    T.b = T.a - T.b;
    T.a = T.a - T.b;
}
int main()
{
    cout<<"Swapping Tow Variable Using Friend Function"<<endl;
    cout<<"--------------------------------------------"<<endl;
    swapping ob;    //creat object
    ob.get();   //function call
    swap(ob);
    ob.display();
    return 0;
}
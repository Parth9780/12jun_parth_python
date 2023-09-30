/* Write a program to find the multiplication values and the cubic values using inline function */

#include <iostream>
using namespace std;
class newline   // class
{
    public:
        inline float mul(float x,float y)     /* inline function of the multiplication of the value */
        {
            return(x*y);
        }
        inline float cube(float x)      /* inline function of the cube of value */
        {
            return(x*x*x);
        }
};
int main()
{
    newline ob;     //object of class
    float val1, val2;
    cout<<"Enter tow value: ";  //get the tow value
    cin>>val1>>val2;
    cout<<"Multiplication value is: "<<ob.mul(val1,val2)<<endl;
    cout<<"The cube value is: "<<ob.cube(val1)<<"\t"<<ob.cube(val2);
    return 0;
}
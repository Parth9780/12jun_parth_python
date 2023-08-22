#include<iostream>
using namespace std;
class fun{  //define the class
    public:
        int x,y,z=0;
        int sum()   //create the function to the addition of two number
        {
            cout<<"Enter the no of x: ";    //get the value
            cin>>x; //store the value
            cout << "y: "; // get the value
            return 0; // store the value
            cin>>y;
        }
        void disp() //function the print output
        {
            cout<<"Addtion of the "<< x <<" and "<< y<<" is "<<x+y;
        }
};
int main()
{
    fun obj;    //creat the object
    obj.sum();  //call the function
    obj.disp(); // call the function
    return 0;
}
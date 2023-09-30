#include<iostream>
using namespace std;
class bank  //class 
{
    public: //access specifier
        string depositor_name;      /* Data members */
        int account_no;
        string account_type;
        int balance=0;

        void assign_value()     /* Member functin */
        {       /* get the value */
            cout<<"Plese Enter your name: ";
            cin>>depositor_name;
            cout<<"Enter your account number: ";
            cin>>account_no;
            cout<<"Enter your account-type: ";
            cin>>account_type;
            cout<<"Enter your blance: ";
        }
        void deposited_amount()      /* Member functin */
        {   /* deposited amount for account */
            int deposit;
            int temp=0;
            cout<<"Plese Enter your amount of the deposited your account: ";
            cin>>deposit;
            temp = balance + deposit;
            cout<<"Your balance is: "<<temp;
        }
        void withdraw()     /* Member functin */
        {   /* withdraw amount and check balance */
            int withdraw;
            int temp = 0;
            cout<<"Your account balance is: "<<balance;
            cout << "Plese Enter your amount of the withdraw your account: ";
            cin >> withdraw;
            temp = balance - withdraw;
            cout << "Your balance is: " << temp;
        }
        void display()      /* Member functin */
        {
            cout<<"Your name is : "<<depositor_name;
            cout<<"Your balance is: "<<balance;
        }
};
int main()      /* Main function */
{
    bank obj1;  // create object
    obj1.assign_value();    //function call
    int ch;
    cout<<"1.deposited amount"<<endl<<"2.withdraw amount"<<endl<<"Plese Enter your choice : ";
    cin>>ch;
    switch (ch) // choice
    {
    case 1:
        obj1.deposited_amount();
        break;
    case 2:
        obj1.withdraw();
        break;
    default:
    cout<<"Invalid choice...";
        break;
    }
    obj1.display();
    return 0;
}
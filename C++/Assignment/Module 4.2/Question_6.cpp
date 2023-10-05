/* Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance)  */

#include<iostream>
using namespace std;
class cricketer //first cricketer class
{
    public:
        string name;    //veriable declare
        int run,performance;
        int average, high_run;
        int Data()  //get data
        {
            cout<<"Information of player......"<<endl<<endl;
            cout<<"Enter the name: ";
            cin>>name;
            cout<<"Enter the total run: ";
            cin>>run;
            cout<<"Enter Average: ";
            cin>>average;
            cout<<"High runs: ";
            cin>>high_run;
            cout<<"Enter Best performance: ";
            cin>>performance;
        }
        void disp() //display data
        {
            cout<<name<<endl;
            cout<<"Total run is "<<run<<endl;
            cout<<"average is : "<<average<<endl;
            cout<<"High run is: "<<high_run;
            cout<<"Performance : "<<performance<<endl;
        }
};

class batsman : public cricketer    //class bestman inharit class cricketer
{
    public:
        string batsman_name;
        int total_run, performance;
        int average, high_run;
        int bats_man()  //get data
        {
            cout<<"Enter batsman name: ";
            cin>>batsman_name;
            cout<<"Enter Total run: ";
            cin>>total_run;
            cout<<"Average run: ";
            cin>>average;
            cout<<"high runs : ";
            cin>>high_run;
            cout<<"Best performance: ";
            cin>>performance;
        }
        void display()  //display bastman data
        {
            cout << batsman_name << endl;
            cout << "Total run is " << total_run << endl;
            cout << "average is : " << average << endl;
            cout << "High run is: " << high_run;
            cout << "Performance : " << performance << endl;
        }
};
int main()
{
    batsman ob;
    ob.Data();
    ob.disp();
    ob.bats_man();
    ob.display();
}
#include<iostream>
using namespace std;
class Manu //create the class
{
    public: //access psefire
    int pizzas()    //pizzas function
    {
        int quantity;
        int pizza;
        int total;
        cout<<"Plase Enter Which Pizza you would like to have? :";
        cin>>pizza;
        cout<<"Plase Enter quntity: ";
        cin>>quantity;
        cout<<"----------------your order---------------------\n";
        switch(pizza)   //switch statement
        {
            case 1:
                cout<<"1 Veggie Pizza"<<endl;
				total = 180*quantity;   //total bill
				cout<<"Your Total Bill is :"<<total<<endl;
                break;
            case 2:
                cout<<"2 Margherita Pizza"<<endl;
                total = 160 * quantity; // total bill
                cout<<"Your Total Bill is :"<<total<<endl;
                break;
            case 3:
                cout << "3 Maxican Pizza"<<endl;
                total = 230 * quantity; // total bill
                cout<<"Your Total Bill is :"<<total<<endl;
                break;
            case 4:
                cout<<"4 Spcile pizza"<<endl;
                total = 350 * quantity; // total bill
                cout<<"Your Total Bill is :"<<total<<endl;
                break;
            default:
                cout<<"Invalid Choice....";
                break;
        }
        return 0;
    }
    int Burger()    //Burger Function
    {
        int quantity;
        int burger;
        int total;
        cout << "Plase Enter Which burger you would like to have? :";
        cin >> burger;
        cout << "Plase Enter quntity: ";
        cin >> quantity;
        cout << "----------------your order---------------------\n";
        switch(burger)
        {
            case 1:
                cout << "1 Kubie Burger"<<endl;
                total = 160 * quantity; // total bill
                cout<<"Your Total Bill is :"<<total<<endl;
            break;
            case 2:
                cout << "2 Paneer Royale Burger"<<endl;
                total = 250 * quantity; // total bill
                cout<<"your Total Bill is:"<<total<<endl;
            break;
            case 3:
                cout << "Double Crispy veg Burger"<<endl;
                total = 300 * quantity; // total bill
                cout<<"Your Total Bill is :"<<total<<endl;
            break;
            default:    //invalid choice
                cout<<"Invalid choice....";
                break;
        }
    }
    int Sandwich()  //sandwich function
    {
        int quantity;
        int sandwich;
        int total;
        cout << "Plase Enter Which Sandwich you would like to have? :";
        cin >> sandwich;
        cout << "Plase Enter quntity: ";
        cin >> quantity;
        cout << "----------------your order---------------------\n";
        switch(sandwich)
        {
            case 1:
                cout << "1 Vegetable Sandwich"<<endl;
                total = 80 * quantity; // total bill
                cout<<"Your Total Bill is: "<<total<<endl;
                break;
            case 2:
                cout << "2.Cheese Sandwich"<<endl;
                total = 150 * quantity; // total bill
                cout<<"Your Total Bill is: "<<total<<endl;
                break;
            case 3:
                cout << "3 Tikka Tandiri Sandwich"<<endl;
                total = 150 * quantity; // total bill
                cout<<"Your Total Bill is :"<<total<<endl;
                break;
            default:
                cout<<"Invalid Choice......";
                break;
        }
    }
    int Roll()      //Roll function
    {
        int quantity;
        int roll;
        int total;
        cout << "Plase Enter Which Roll you would like to have? :";
        cin >> roll;
        cout << "Plase Enter quntity: ";
        cin >> quantity;
        cout << "----------------your order---------------------\n";
        switch(roll)
        {
            case 1:
                cout << "1 California Roll"<<endl;
                total = 120 * quantity; // total bill
                cout<<"Your Total Bill is :"<<total<<endl;
                break;
            case 2:
                cout << "2 Spring Roll"<<endl;
                total = 100 * quantity; // total bill
                cout << "Your Total Bill is :" << total<<endl;
                break;
            case 3:
                cout << "3 Cheese Roll"<<endl;
                total = 160 * quantity; // total bill
                cout << "Your Total Bill is :" << total<<endl;
                break;
            default:
                cout<<"Invalid Choice......";
                break;
        }
    }
    int Biryani()   //biryani function
    {
        int quantity;
        int biryani;
        int total;
        cout << "Plase Enter Which biryani you would like to have? :";
        cin >> biryani;
        cout << "\nPlase Enter quntity: ";
        cin >> quantity;
        cout << "----------------your order---------------------\n";
        switch(biryani)
        {
            case 1:
                cout << "1 Veg biryani"<<endl;
                total = 130 * quantity; // total bill
                cout<<"Your Total Bill is :"<<total<<endl;
                break;
            case 2:
                cout << "2 Hyderabadi Veg biryani"<<endl;
                total = 150 * quantity; // total bill
                cout << "Your Total Bill is :" << total<<endl;
                break;
            case 3:
                cout << "3 Paneer Biryani"<<endl;
                total = 200 * quantity; // total bill
                cout<<"Your Total Bill is :"<<total<<endl;
                break;
            case 4:
                cout << "4 paneer dum Biryani"<<endl;
                total = 310 * quantity; // total bill
                cout<<"Your Total Bill is :"<<total<<endl;
            default:
                cout<<"Invalid Choice.....";
                break;
        }
    }
};
int main()
{
    Manu obj;
    string cname;
    int ch;
    int r=1,i;
    cout<<"----------------------------Welcome to the Patel Fast Food------------------------------------";
    cout<<endl<<"Plase Enter your Name: ";  //get the customer name
    cin>>cname;
    cout<<"Hello "<<cname<<endl;
    while (i=r)
    {
        if (r==1)
        {
                cout << "What would you like to order?" << endl; // aske the Customer choice
                cout << "-----------menu------------" << endl;
                cout << "1. Pizzas" << endl;
                cout << "2. Burgers" << endl;
                cout << "3. Sandwich" << endl;
                cout << "4. Rolls" << endl;
                cout << "5. Biryani" << endl;
                cout << "Plase Enter your choice: "; // get the choice
                cin >> ch;
                switch (ch)
                {
                case 1: // Pizzas Types
                    cout << "1 Veggie Pizza  Rs.180\n";
                    cout << "2 Margherita Pizza  Rs.160\n";
                    cout << "3 Maxican Pizza  Rs.230\n";
                    cout << "Spcial Pizza  Rs.350\n";
                    obj.pizzas();
                    break;
                case 2: // Burgers Types
                    cout << "1 Kubie Burger  Rs.160\n";
                    cout << "2 Paneer Royale Burger  Rs.250\n";
                    cout << "3 Double Crispy veg Burger  Rs.300\n";
                    obj.Burger();
                    break;
                case 3: // Sandwich Types
                    cout << "1 Vegetable Sandwich  Rs.80\n";
                    cout << "2.Cheese Sandwich  Rs.150\n";
                    cout << "3 Tikka Tandiri Sandwich  Rs.150\n";
                    obj.Sandwich();
                    break;
                case 4: // Rolls types
                    cout << "1 California Roll  Rs.120\n";
                    cout << "2 Spring Roll  Rs.100\n";
                    cout << "3 Cheese Roll  Rs.160\n";
                    obj.Roll();
                    break;
                case 5: // Biryani types
                    cout << "1 Veg biryani  Rs.130\n";
                    cout << "2 Hyderabadi Veg biryani  Rs.150\n";
                    cout << "3 Paneer Biryani  Rs.200\n";
                    cout << "4 paneer dum Biryani  Rs.310\n";
                    obj.Biryani();
                    break;
                default:
                    cout << "Invalid Choice......";
                    break;
                    cout << "\nWorld You Like The Order Anything Else? Y/N: ";
                    cin >> r;
                }
        }
        cout<<"Your order will be delivered in 40 minutes\n";
        cout<<"Thank You For Ordring From Patel Fast Food\n";
        cout<<"Would you like to order anything else? Y/N: ";
        cin>>r;
        i=r;
    }
    

        return 0;
}

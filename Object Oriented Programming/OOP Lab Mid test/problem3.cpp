#include <bits/stdc++.h>
using namespace std;
// bismillah
class restaurantmeal
{
public:
    string name;
    string lstname;
    float price;
    restaurantmeal()
    {
        cin >> name >> lstname >> price;
    }
    void display()
    {
        cout << "Meal: " << name << " " << lstname << endl
             << "Price: $" << price << endl;
    }
};
class hostelservice
{
public:
    string servname;
    string servlname;
    float servfee;
    int roomnum;
    hostelservice()
    {
        cin >> servname >> servlname >> servfee >> roomnum;
    }
    void display()
    {
        cout << "Service: " << servname << " " << servlname << endl
             << "Service Fee: $" << servfee << endl
             << "Room Number: " << roomnum << endl;
    }
};
class roomservicemeal : public restaurantmeal, public hostelservice
{
public:
    void display()
    {
        cout << "Room Service Meal Details:" << endl;
        restaurantmeal::display();
        hostelservice::display();
        cout << "Total Cost: $" << price + servfee;
    }
};
int main()
{
    roomservicemeal x;
    x.display();
}
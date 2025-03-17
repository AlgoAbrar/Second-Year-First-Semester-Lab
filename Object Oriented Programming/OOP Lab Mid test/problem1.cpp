#include <iostream>
using namespace std;
//bismillah
class Order {
private:
    int tableNumber;
    string serverName;
    int numberOfPatrons;
    const double tableMinCharge = 4.75;

public:
    Order(int tNum, string sName, int nPatrons) {
        tableNumber = tNum;
        serverName = sName;
        numberOfPatrons = nPatrons;
    }

    void displayMinCharge() {
        cout << "Table Minimum Charge: $" << (int)(tableMinCharge * 100) / 100.0 << endl;
    }

    void displayOrderDetails() {
        cout << "Table Number: " << tableNumber << endl;
        cout << "Server Name: " << serverName << endl;
        cout << "Number of Patrons: " << numberOfPatrons << endl;
        double totalCharge = tableMinCharge * numberOfPatrons;
        cout << "Total Minimum Charge: $" << (int)(totalCharge * 100) / 100.0 << endl;
    }
};

int main() {

    Order order1(5, "John Doe", 3);

    // Displaying order details
    order1.displayMinCharge();
    order1.displayOrderDetails();

    return 0;
    //alhamdulillah
}

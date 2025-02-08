#include <bits/stdc++.h>
using namespace std;
// bismillah
class Product
{
public:
    int productID;
    string name;
    double price;
    int stockQuantity;
    void addProduct()
    {
        cout << "Enter Product ID: ";
        cin >> productID;
        cin.ignore();
        cout << "Enter Product Name: ";
        getline(cin, name);
        cout << "Enter Product Price: ";
        cin >> price;
        cout << "Enter Stock Quantity: ";
        cin >> stockQuantity;
    }
    void displayProduct(){
        cout << "\nProduct Details:\n";
        cout << "ID: " << productID << "\n";
        cout << "Name: " << name << "\n";
        cout << "Price: $" << price << "\n";
        cout << "Stock: " << stockQuantity << "\n";
    }
    void checkAvailability(){
        if (stockQuantity > 0)
            cout << "Product is available in stock." << endl;
        else
            cout << "Product is out of stock." << endl;
    }
};

int main()
{
    Product p1;
    p1.addProduct();
    p1.displayProduct();
    p1.checkAvailability();
    return 0;
    // alhamdulillah
}
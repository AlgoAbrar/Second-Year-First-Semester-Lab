#include <bits/stdc++.h>
using namespace std;
// bismillah
//exp 4
//namme: Constructor in Object Oriented Programming
// problem 1: Calculate rectangle with help of constructor
class rectangle
{
public:
    float length, width;
    rectangle()
    {
        cin>>length>>width;
        cout << "length is " << length << endl
             << "width is " << width << endl
             << "Area is " << area() << endl;
    }
    rectangle(float l, float w)
    {
        length = l;
        width = w;
        cout << "length is " << length << endl
             << "width is " << width << endl
             << "Area is " << area() << endl;
    }
    float area()
    {
        return length * width;
    }
    //     void display()
    //     {
    //         cout << "length is " << length << endl
    //              << "width is " << width << endl
    //              << "Area is " << area() << endl;
    //     }
};
int main()
{
    float x, y;
    cin >> x >> y;
    rectangle t(x, y);
    rectangle zz;

    return 0;
    // alhamdulillah
}
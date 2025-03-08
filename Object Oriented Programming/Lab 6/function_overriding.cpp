#include <bits/stdc++.h>
using namespace std;
// bismillah
class base {
public:
    int val;
    virtual void show() {
        cout << "Base class value: " << val << endl;
    }
};
class derived1 : virtual public base {
public:
    derived1() { val = 1; }
    void show() override {
        cout << "Derived1 value: " << val << endl;
    }
};
class derived2 : virtual public base {
public:
    derived2() { val = 2; }
    void show() override {
        cout << "Derived2 value: " << val << endl;
    }
};
class derived3 : public derived1, public derived2 {
public:
    derived3() { val = 3; }
    void show() override {
        cout << "Derived3 has value: " << val << endl;
    }
};

int main() {
    derived3 obj;
    obj.show();

    return 0;
    // alhamdulillah
}

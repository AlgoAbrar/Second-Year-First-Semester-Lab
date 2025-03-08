#include<bits/stdc++.h>
using namespace std;
//bismillah
class base {
public:
    int val;
};
class derived1 : virtual public base {
public:
   derived1() {
        val = 1;
    }
};
class derived2 : virtual public base { 
public:
   derived2() {
        val = 2;
    }
};
class derived3 : public derived1,public derived2 {
public:
    void getValue() {
        cout << "the value is " << val << endl;
    }
};

int main() {
    derived3 obj;
    obj.getValue();
    return 0;
    //alhamdulillah
}

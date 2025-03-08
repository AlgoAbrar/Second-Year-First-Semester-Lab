#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    void show()
    {
        cout << "Student details displayed." << endl;
    }
};

class Test
{
public:
    void show()
    {
        cout << "Test marks displayed." << endl;
    }
};

class Result : public Student, public Test
{
    
};

int main()
{
    Result j;
    j.show();
    return 0;
}

// solve
/*#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    void show() {
        cout << "Student details displayed." << endl;
    }
};

class Test {
public:
    void show() {
        cout << "Test marks displayed." << endl;
    }
};

class Result : public Student, public Test {
public:

    void show() {
        cout << "Result details: " << endl;
        Student::show();
        Test::show();
    }
};

int main() {
    Result obj;
    obj.show();
    return 0;
}
*/

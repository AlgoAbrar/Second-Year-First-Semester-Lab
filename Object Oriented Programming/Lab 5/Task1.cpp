#include <bits/stdc++.h>
using namespace std;

class Mammals
{
public:
    void mamaldisplay()
    {
        cout << "I am mammal" << endl;
    }
};

class MarineAnimals
{
public:
    void marinedisplay()
    {
        cout << "I am a marine animal" << endl;
    }
};

class BlueWhale : public Mammals, public MarineAnimals
{
public:
    void bluewhaledisplay()
    {
        cout << "I belong to both categories: Mammals as well as Marine Animals" << endl;
    }
};

int main()
{

    Mammals mammalObj;
    mammalObj.mamaldisplay();

    MarineAnimals marineObj;
    marineObj.marinedisplay();

    BlueWhale blueWhaleObj;
    blueWhaleObj.bluewhaledisplay();

    blueWhaleObj.mamaldisplay();
    blueWhaleObj.marinedisplay();

    return 0;
}

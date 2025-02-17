#include <bits/stdc++.h>
using namespace std;
// bismillah
class Time
{
    int hours;
    int minutes;
    int seconds;

public:
    void gettime(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }
    void puttime()
    {
        cout << hours << "hours " << minutes << "minutes and " << seconds << "seconds" << endl;
    }
    void sum(Time, Time);
};
void Time ::sum(Time t1, Time t2)
{
    seconds = t1.seconds + t2.seconds;
    minutes = t1.minutes + t2.minutes + (seconds / 60);
    seconds %= 60;
    hours = t1.hours + t2.hours + (minutes / 60);
    minutes %= 60;
}

int main()
{
    Time t1, t2, t3;
    t1.gettime(2, 30, 59);
    t2.gettime(1, 45, 10);
    t3.sum(t1, t2);
    cout << "t1= ";
    t1.puttime();
    cout << "t2= ";
    t2.puttime();
    cout << "t3= ";
    t3.puttime();
    return 0;
    // alhamdulillah
}
#include <iostream>
using namespace std;

class Time {
    private:
        int hours, minutes, seconds;
    public:
        Time() : seconds(0), minutes(0), hours(0) {}
        Time(int hr, int min, int sec) : seconds(sec), minutes(min), hours(hr) {}
        void display() {
            cout << hours << ":" << minutes << ":" << seconds << endl;
        }
        Time add_times(Time a, Time b) { 
            Time temp;
            temp.seconds = (a.seconds + b.seconds) % 60;
            temp.minutes = (a.minutes + b.minutes + ((a.seconds + b.seconds)/60)) % 60;
            temp.hours = (a.hours + b.hours + ((a.minutes + b.minutes)/60)) % 24;
            return temp;
        }
};

int main() {
    Time t1(12,43,15), t2 = t1, t3_unInit;
    int hr, min, sec;
    t3_unInit = t3_unInit.add_times(t1, t2);
    t1.display();
    t2.display();
    t3_unInit.display();
    return 0;
}
#include <iostream>
using namespace std;

class Time {
    private:
        int hours, minutes, seconds;
    public:
        Time() { hours = minutes = seconds = 0; }
        Time(int hr, int min, int sec) {
            hours = hr, minutes = min, seconds = sec;
        }
        void display() {
            cout << hours << ":" << minutes << ":" << seconds << endl;
        }
        void add_times(Time a, Time b) { 
            seconds = (a.seconds + b.seconds) % 60;
            minutes = (a.minutes + b.minutes + ((a.seconds + b.seconds)/60)) % 60;
            hours = (a.hours + b.hours + ((a.minutes + b.minutes)/60)) % 24;
        }
};

int main() {
    Time t1(12,43,15), t2(4,13,56), t3_unInit;
    int hr, min, sec;
    t3_unInit.add_times(t1, t2);
    t1.display();
    t2.display();
    t3_unInit.display();
    return 0;
}
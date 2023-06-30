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
        void setData(int hr, int min, int sec) {
            hours = hr, minutes = min, seconds = sec;
        }
        void display() {
            cout << hours << ":" << minutes << ":" << seconds << endl;
        }
        void add_times(Time a, Time b, int& hr, int& min, int& sec) const { 
            hr = (a.hours + b.hours) % 24;
            min = (a.minutes + b.minutes) % 60;
            sec = (a.seconds + b.seconds) % 60;
        }
};

int main() {
    Time t1(12,43,15), t2(4,13,56), t3_unInit;
    int hr, min, sec;
    t1.add_times(t1, t2, hr, min, sec);
    t3_unInit.setData(hr, min, sec);
    t3_unInit.display();
    return 0;
}
#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

class tollBooth {
    private:
        unsigned int no_of_cars;
        double cash_total;

    public:
        tollBooth() {
            no_of_cars = 0;
            cash_total = 0;
        };
        void payingCar() {
            no_of_cars += 1;
            cash_total += 0.50;
        };
        void nopayCar() {
            no_of_cars += 1;
        };
        void display() const {  //Permission to mutate values in denied
            cout << "Cars gone past: " << no_of_cars; 
            cout << '\t' << "Total funds received: GHC " << 
            cash_total << endl;
        }
};

int main() {
    tollBooth booth1;
    cout << "TollBooth Management System" << endl
    << "Press 'y' for paying cars" << endl <<
    "Press 'n' for non-paying cars" << endl <<
    "Press 'esc' to end programme and display total number of cars and funds gathered" << endl;
    //Keys pressed will be detected using ASCII codes
    const int ESC = 27;
    const int y = 121;
    const int n = 110;
    bool exit_program = false;

    while (!exit_program) {
    int c = getch();
    if (c == y) {
        booth1.payingCar();
        cout << "Paying Car Added" << endl;
    }
    if(c == n) {
        booth1.nopayCar();
        cout << "Non-paying Car Added" << endl; 
    }
    if(c == ESC) {
        booth1.display();
        exit_program = true;
    }}
    return 0;
}
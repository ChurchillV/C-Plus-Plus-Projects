#include <iostream>
#include <conio.h>
using namespace std;

class person{
    protected:
        char name[40];
    public:
        void setName() {
            cout << "Enter name: ";
            cin >> name;
        }
        void printName() {
            cout << "\nName is: " << name;
        }
};
int main() {
    person* persPtr[100];
    int n = 0;
    bool isExit = false;
    do {
    char choice;
    do {
        choice = getch();
        switch(choice) {
            case 'y':
                persPtr[n] = new person;
                persPtr[n] -> setName();
                n++;
                cout << "\nEnter another (y/n)? ";
                break;
            case 'n':
                cout << "\nExiting\n";

            default:
                break;
        }
        cin >> choice;
    }
    while(choice == 'y');
    } while(!isExit);
    
    for(int j = 0; j < n; j++) {
        cout << "\nPerson number " << j+1;
        persPtr[j]->printName();
    }
    return 0;
}
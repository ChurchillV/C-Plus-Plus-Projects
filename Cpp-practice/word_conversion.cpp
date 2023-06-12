#include <iostream>
using namespace std;

void classify(int input);
void conversion(int innput);

int main() {

    int input1, input2;
    cin >> input1;
    cin >> input2;
    conversion(input1);
    conversion(input2);
    return 0;
}

void conversion(int input) {
    if(input < 1 || input > 9) {
        classify(input);
}
    else if (input == 1) cout << endl << "one";
    else if (input == 2) cout << endl << "two";
    else if (input == 3) cout << endl << "three";
    else if (input == 4) cout << endl << "four";
    else if (input == 5) cout << endl << "five";
    else if (input == 6) cout << endl << "six";
    else if (input == 7) cout << endl << "seven";
    else if (input == 8) cout << endl << "eight";
    else if (input == 9) cout << endl << "nine";
    else cout << endl << "Invalid input";
}

void classify(int input) {
    if(input %2 == 0) {
            cout << endl << "Even";
        }
        else cout << endl << "Odd";
}
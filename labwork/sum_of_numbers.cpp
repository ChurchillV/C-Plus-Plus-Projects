#include <iostream>
using namespace std;

//Function declarations and global variables
void calc_sum();
void validate_input();
string number;
bool isError;

int main() {
    cout << "SUM OF NATURAL NUMBERS" << endl;
    do {
    isError = false;
    cout << "Enter the natural number to add up to: " << endl;
    validate_input();
    cin >> number;
    cout << "Calculating sum..." << endl;
    calc_sum();
    } while(isError);

    return 0;
}

//Function definitions
void calc_sum() {
    int ref = stoi(number);
    int start = 0;
    for(int i = 0; i <= stoi(number); i++) {
        start += ref;
        ref--;
    }
    cout << "Sum of the first " << number << " natural numbers = " << start;
}

void validate_input() {
    for(int i = 0; i < number.length(); i++) {
        if (!isdigit(number[i])) {
            isError = true;
            cout << "Please enter a valid input" <<endl;
            return;
        }
    }
}
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
//Classify inputs as even or odd
void classify(int input) {
    if(input %2 == 0) {
            cout << endl << "Even";
        }
        else cout << endl << "Odd";
}

//Convert inputs to strings
void conversion(int input) {
    string values[9] = {"one","two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if(input < 1 || input > 9) {
        classify(input);
}
    else cout <<endl << values[input-1];
}
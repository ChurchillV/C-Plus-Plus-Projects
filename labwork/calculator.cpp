#include <iostream>
using namespace std;

//Global variables and function definitions
float num1, num2, result;
char operation;
void addition();
void subtraction();
void multiplication();
void division();
inline void displayResult();
inline void displayExp();

//Main function
int main() {
    cout << "CALCULATOR PROGRAMME" << endl;
    char run_again;
    do {
        cout << endl << "Enter first value: ";
        cin >> num1;
        cout << "Enter Operator (+, -, *, /): ";
        cin >> operation;
        cout << "Enter second value: ";
        cin >> num2;
        switch (operation) {
            case '+':
                addition();
                break;
            case '-':
                subtraction();
                break;
            case '*':
                multiplication();
                break;
            case '/':
                division();
                break;
            default:
                cout << "Invalid option. Please try again.";
                break;
    }
    cout << endl << "Perform another calculation? (y/n)" << endl << "Response: ";
    cin >> run_again;
    } while(run_again == 'y');
    return 0;
}

//Addition operation
void addition() {
    displayExp();
    result = num1 + num2;
    displayResult();
};

//Subtraction operation
void subtraction() {
    displayExp();
    result = num1 - num2;
    displayResult();
};

//Multiplication operation
void multiplication() {
    displayExp();
    result = num1 * num2;
    displayResult();
};

//Division operation
void division() {
    displayExp();
    result = num1 / num2;
    displayResult();
};

//Inline function to display the expression before entering the 2nd operand
inline void displayExp() {
    cout << num1 << " " << operation << " ";
}

//Inline function to display the result of the operation
inline void displayResult() {
    cout << num1 << " " << operation << " " << num2 << " " << '=' << " " << result << endl;
}
#include <iostream>
#include <string>
using namespace std;

//Function declarations and Global variable
inline void warning_message();
bool validate_input(string input);
double power(double value, int exp);
double power(double value);
bool isError;

int main() {
    cout << "EXPONENTIATION PROGRAMME" << endl;
    do {    //User enters input 
        string number;
        isError = false; //Error code is set to false
        cout << "Enter value: ";
        cin >> number;
        if(validate_input(number)) {
            char option;
            double base = stod(number);
            do {    //User decides between default exponent or user-defined exponent
                cout << "Options:" <<
                endl << "1. Set exponent" <<
                endl << "2. Use default (number ^ 2)";
                cout << endl << "Option: ";
                cin >> option;
                string exponent;

                switch(option) {
                    case '1':
                        cout << "Enter exponent: ";
                        cin >> exponent;
                        if(validate_input(exponent)) {  //User input for the exponent is validated
                            int exp = stoi(exponent);
                            cout << endl << number <<   //Output
                            " exp " << exponent <<
                            " = " << power(base, exp);
                        }
                        else {
                            warning_message();
                        }
                        break;
                    case '2':
                        cout << endl << number << //Output
                            " exp " << 2 <<
                            " = " << power(base);
                        break;
                    default:
                        warning_message(); //Error checking
                        break;
                }
            } while(isError);
        }
        else {
            warning_message(); //Error checking
        }
    } while(isError);

    return 0;
}

//Function to check if the input is a valid number
bool validate_input(string input) {
    for(int i = 0; i < input.length(); i++) {
        if (isdigit(input[i]) || input[i] == '.') {
            return true;
        }
        else return false;
    }
}

//Function to exponentiate the function
double power(double value, int exp) {
    double result = 1.0;
    for(int i = 0; i < exp; i++ ) {
        result*= value;
    }
    return result;
}

//Overloaded function for default exponentiation (exp 2)
double power(double value) {
    double result = 1.0;
    result*= value*value;
    return result;
}

//Inline warning message in case of invalid input 
inline void warning_message() {
    cout << endl << "Invalid input. Please try again" << endl;
    isError = true;
}
#include <iostream>
#include <iomanip>
using namespace std;

bool ctf = true;
float answer;
//Prompt Message (Changes depending on user's choice)
void prompt() {
    if (ctf) {
        cout << "Enter temperature (Celcius): ";
        ctf = false;
    }
    else {
        cout << "Enter temperature (Fahrenheit): ";
    }
}

//Convert from Celcius to Fahrenheit F = (C * (9/5)) + 32
void celcius_to_fahrenheit() {
    float input;
    prompt();
    cin >> input;
    answer = (input * (9.0/5.0)) + 32.0;
    cout << "Temperature in Fahrenheit: "
    << fixed 
    << setprecision(2) 
    << answer;
}

//Convert from Fahrenheit to Celcius C = (5*(F - 32))/9
void fahrenheit_to_celcius() {
    float input;
    prompt();
    cin >> input;
    answer = (5.0*(input - 32.0))/9.0;
    cout << "Temperature in Celcius: " 
    << answer
    << endl;
}

int main() {
    cout << "TEMPERATURE CONVERTER PROGRAMME" << endl <<
    endl << "What would you like to do?" << 
    endl << "1. Celcius to Fahrenheit" << endl << 
    "2. Fahrenheit to Celcius";
    //User makes a selection
    option_section:
    char option;
    cout << endl << "Option: ";
    cin >> option;
        switch(option) {
        case '1':
            celcius_to_fahrenheit();
            break;
        case '2':
            ctf = false;
            fahrenheit_to_celcius();
            break;
        default:
            cout << "Invalid option. Please try again" << endl;
            goto option_section;
            break;
    };

    return 0;
}
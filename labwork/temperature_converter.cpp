#include <iostream>
#include <conio.h>
using namespace std;

//Global varaibles and function delcarations
bool ctf; //Variable to note if the user chooses Celcius to Fahrenheit
bool error_found;
float answer;
void prompt();
void celcius_to_fahrenheit();
void fahrenheit_to_celcius();

//Main function
int main() {
    do {
        cout << "TEMPERATURE CONVERSION PROGRAMME" << endl << endl << "What would you like to do?" <<
        endl << "1. Celcius to Fahrenheit" << endl << "2. Fahrenheit to Celcius";
        //User makes a selection
        error_found = false;
        cout << endl << "Option: ";
        char option = getchar();
        switch(option) {
            case '1':
                ctf = true;
                celcius_to_fahrenheit();
                break;
            case '2':
                ctf = false;
                fahrenheit_to_celcius();
                break;
            default:
                cout << "Invalid option. Please try again" << endl;
                error_found = true;
                break;
    }} while(error_found);

    return 0;
}

// Function definitions

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
    cout << "Temperature in Fahrenheit: " << answer;
}

//Convert from Fahrenheit to Celcius C = (5*(F - 32))/9
void fahrenheit_to_celcius() {
    float input;
    prompt();
    cin >> input;
    answer = (5.0*(input - 32.0))/9.0;
    cout << "Temperature in Celcius: " 
    << answer << endl;
}
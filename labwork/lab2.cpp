#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Function to calculate BMI
float calcBMI(float height, float weight) {
    height = height/100;
    return weight/pow(height,2);
}

//Function to display BMI and give appropriate responses
void displayBMI(float BMI) {
    if (BMI < 18.5) {
        cout << "You are underweight." <<endl;
    }
    else if (BMI > 18.5 && BMI < 24.9) {
        cout << "Your weight is normal." <<endl;
    }
    else if (BMI > 25 && BMI < 29.9) {
        cout << "You are overweight." <<endl;
    }
    else if (BMI > 30 && BMI < 39.9) {
        cout << "You are obese." <<endl;
    }
    else if (BMI > 40) {
        cout << "You are morbidly obese." <<endl;
    }
    else {
        cout << "Something went wrong. Please try again" << endl;
    }
}

// //Function to check if the inputs from users are valid
// bool validate(string input) {
//     for (int i = 0; i < input.length; i++) {

//     }
// }

//Main function
int main() {
    cout << "Body Mass Index Calculator" << endl;
    float height, weight;

    cout << "Enter your height(cm): " << endl;
    cin >> height;
    cout << "Enter your weight(kg): " << endl;
    cin >> weight;
    cout << "Your BMI is: " << setprecision(5) << calcBMI(height, weight) << endl;
    displayBMI(calcBMI(height, weight));
    return 0;
}
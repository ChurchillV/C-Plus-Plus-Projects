#include <iostream>
using namespace std;

int main() {

    // cout << "Hello World" << endl;
    int number = 17785;
    string sentence = "Welcome to this class!";
    float decimal = -56.1427;
    string mixture = "5262778y";
    int num1,num2,num3 = 5;
    bool isTrue = true;
    string array[10] = {"Ultimate", "Varnacular", "Intimate", "Conjugate", sentence, mixture};
    cout << array[4] << " is a string" << endl << "Num2 is " << num2 << endl;

    int age;
    cout << "Year approximation Programme" << endl << "Enter age: " <<endl;
    cin >> age;
    cout << "You were born in " << 2023 - age << endl;

    int Marks[] = {67, 71, 54, 43, 82, 90};
    Marks[2] = 75;
    int AppliedElectricty = Marks[4];
    cout << "Third mark is " << Marks[2] << endl << "Applied ELectricity score: " << AppliedElectricty << endl;

    return 0;
}
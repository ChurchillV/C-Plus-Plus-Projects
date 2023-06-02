#include <iostream>
using namespace std;

//Function taking two integer inputs by reference and giving the smaller value a value of zero
int main() {
    void zeroSmaller(int&, int&);
    int num1, num2;
    cout << "Enter values" << endl;
    cout << "1st value : ";
    cin >> num1;
    cout << "2nd value : ";
    cin >> num2;
    zeroSmaller(num1, num2);
    cout << "1st value is now : " << num1 << endl;
    cout << "2nd value is now : " << num2 << endl;
    return 0;
}

//Function definition
void zeroSmaller(int& numb1, int& numb2) {
    int output;
    if(numb1 > numb2) {
        cout << "The smaller number is : " << numb2 << endl;
        numb2 = 0;
    }
    else {
        cout << "The smaller number is : " << numb1 << endl;
        numb1 = 0;
    }
}
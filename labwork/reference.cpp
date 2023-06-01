#include <iostream>
using namespace std;

int main() {
    void zeroSmaller(int&, int&);
    int num1, num2;
    cout << "Enter values" << endl;
    cout << "1st value : " << endl;
    cin >> num1;
    cout << "2nd value : " << endl;
    cin >> num2;
    zeroSmaller(num1, num2);
    cout << "1st value is now : " << num1 << endl;
    cout << "2nd value is now : " << num2 << endl;
    return 0;
}

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
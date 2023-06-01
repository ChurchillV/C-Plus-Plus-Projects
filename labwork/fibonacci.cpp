#include <iostream>
using namespace std;

void validate_input(string number);
int fibonacci(int num);
bool isError;

int main() {
    cout << "FIBONACCI SEQUENCE GENERATOR" << endl;
    do {
        isError = false;
        cout << "Enter number of natural digits: ";
        string num;
        cin >> num;
        validate_input(num);
        if (!isError) {
            int integer = stoi(num);
            int answer = fibonacci(integer);
            cout << "Fibonnaci sequence for the first " << num << " natural numbers is : " << answer << endl;
        }
    } while (isError);
    return 0;
}

int fibonacci(int num) {
    int result = 0;
    if(num == 1 || num == 0) {
        result += 1;
    }
    else {
         result += fibonacci(num-1) + fibonacci(num-2);
    }
    return result;
}

void validate_input(string number) {
    for(int i = 0; i < number.length(); i++) {
        if (!isdigit(number[i])) {
            cout << "Please enter a valid input" <<endl;
            isError = true;
        }
        else isError =  false;
    }
}
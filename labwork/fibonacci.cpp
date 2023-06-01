#include <iostream>
using namespace std;

int fibonacci(int num);

int main() {
    cout << "FIBONACCI SEQUENCE GENERATOR" << endl;
    cout << "Enter number of natural digits: ";
    int num;
    cin >> num;
    int answer = fibonacci(num);
    cout << "Fibonnaci sequence for the first " << num << " natural numbers is : " << answer << endl;
    return 0;
}

int fibonacci(int num) {
    int result = 0;
    if(num == 1 || num == 0) {
        result += num;
    }
    else {
         result += fibonacci(num-1) + fibonacci(num-2);
    }
    return result;
}
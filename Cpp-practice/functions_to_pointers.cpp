#include <iostream>
using namespace std;

int addition (int a, int b) { return a+b; }
int subtraction (int a, int b) { return a-b; }
int operation (int a, int b, int (*funct_to_call) (int, int)) { return (*funct_to_call)(a, b); }

int main() {
    int m, n;
    int (*minus)(int, int) = subtraction;
    m = operation(7, 5, addition);
    n = operation(m, 11, minus);
    cout << "m = " << m << endl;
    cout << "n = " << n << endl;
    return 0;
}
#include <iostream>
#include "factorial.h"

int main() {
    int value;
    std::cout << "Enter value for calculation: ";
    std::cin >> value;
    std::cout << std::endl << "The factorial of " << value << " is " << factorial(value);
    return 0;
}
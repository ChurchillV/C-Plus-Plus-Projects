#include <iostream>

int main() {
    double miles, km;
    std::cout << "Miles to Kilometres converter\n\n";
    std::cout << "Enter distance in miles: ";
    std::cin >> miles;

    km = miles * 1.6093;

    std::cout << "\n" << miles << " miles = " << km << " kilometres";  
}
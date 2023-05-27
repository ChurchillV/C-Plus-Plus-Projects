#include <iostream>
using namespace std;

int main() {
    float gallons;
    cout << "GALLONS TO CUBIC FEET PROGRAMME" << endl << "Enter number of gallons: " << endl;
    cin >> gallons;
    cout << "Cubic Feet Equivalent: " << gallons/7.481;    // 7.481 gallons are in a single cubic foot (Assuming)
    return 0;
}
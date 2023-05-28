#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float gallons;
    cout << "GALLONS TO CUBIC FEET PROGRAMME" << endl << "Enter number of gallons: " << endl;
    cin >> gallons;
    cout << "Cubic Feet Equivalent: " << setprecision(4) << gallons/7.481;    // 7.481 gallons are in a single cubic foot (Assuming)
    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

class Distance {
    private:
        int feet;
        float inches;
    public:
        Distance() : feet(0), inches(0) {}
        Distance(int feet_input, float inches_input) : feet(feet_input), inches(inches_input) {}
        void getDist() {
            cout << "\nEnter Feet: "; 
            cin >> feet;
            cout << "\nEnter Inches: ";
            cin >> inches;
        }
        void showDist() const {
            cout << endl<< "Distance: " << feet << " feet, " << inches << " inches\n\n";
        }
        Distance operator+ (Distance operand) const {
            int resultant_feet = feet + operand.feet;
            float resultant_inches = inches + operand.inches;
            if (resultant_inches >= 12.0) {
                resultant_feet += floor(resultant_inches/12);
                resultant_inches = fmod(resultant_inches, 12);
            }
            return Distance(resultant_feet, resultant_inches);
        }
        Distance operator- (Distance operand) const {
            int resultant_inches = fabs(inches - operand.inches);
            int resultant_feet = fabs(feet - operand.feet);
            return Distance(resultant_feet, resultant_inches);
        }
};

int main() {
    Distance dist1(23, 11), dist2(11, 2), dist3;
    dist1.showDist();
    dist2.showDist();
    dist3 = dist1 + dist2;
    dist3.showDist();
    // dist3 = dist1 - dist2;
    // dist3.showDist();
    return 0;
}
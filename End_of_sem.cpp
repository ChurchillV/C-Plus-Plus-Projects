#include <iostream>
#include <math.h>   // Gives access to the floor in the toMixedFraction function  
#include <numeric>  // Gives access to the gcd function for reducing fractions to simplest form
using namespace std;

class Fraction{
    protected:
        int numerator, denominator, whole_number;

    public:
    // Constructor function to create a new fraction with no whole number
        Fraction(int num, int denum) {
            numerator = num;
            denominator = denum;
            whole_number = 0;
        }
    // Constructor function to create a new fraction with a whole number
        Fraction(int num, int denum, int whole_num) {
            numerator = num;
            denominator = denum;
            whole_number = whole_num;
        }

    // Overloaded Addition operator for fractions (Converts mixed fractions to improper fractions before operation)
        Fraction operator+(Fraction& op2) {
            int num_sum, denum_sum; // Temporary values to store the results of the addition
        // Check if either fraction is mixed or not, and convert to an improper fraction
            if (whole_number != 0) { // Check if the whole number is not 0
                mixed_to_improper(*this); // Convert the mixed fraction to an improper fraction (*this refers to the object itself)
            }
        // Now I want to do same for the other fraction
            if (op2.whole_number != 0) {
                mixed_to_improper(op2); 
            }
        // Now Addition can take place
        // Check if the denominators are the same. If yes, add the numerators directly
            if (denominator == op2.denominator) {
                num_sum = numerator + op2.numerator;
                denum_sum = denominator;
            }
        // Otherwise, there's a different method of addition
            else {
                num_sum = (op2.denominator * numerator) + (denominator * op2.numerator);
                denum_sum = denominator * op2.denominator;
            }
        // Reduce the fraction to it's simplest terms using the gcd function to find a common divisor
            int common_divisor = gcd(num_sum, denum_sum);
            num_sum /= common_divisor; // Reduce the numerator to its simplest form
            denum_sum /= common_divisor; // Reduce the denominator as well
        // Display the operation taking place
            showFraction(); cout << " + "; op2.showFraction(); cout << " = ";
            return Fraction(num_sum, denum_sum);
        };

    // Overloaded Multiplication operator for fractions
        Fraction operator*(Fraction& op2) {
        // Check if either fraction is mixed or not, and convert to an improper fraction
            if (whole_number) {
                mixed_to_improper(*this);
            }
        // Now I want to do same for the other fraction
            if (op2.whole_number) {
                mixed_to_improper(op2);
            }
        // Multiply the numerators and the denominators and return a new Fraction object at the end
            int num = numerator * op2.numerator;
            int denum = denominator * op2.denominator;
         // Reduce the fraction to it's simplest terms using the gcd function to find a common divisor
            int common_divisor = gcd(num, denum);
            num /= common_divisor; // Reduce the numerator to its simplest form
            denum /= common_divisor; // Reduce the denominator as well
        // Display the operation taking place
            showFraction(); cout << " * "; op2.showFraction(); cout << " = ";
            return Fraction(num, denum);
        };

    // Function to convert fractions as decimals
        float toDecimal() {
            if (whole_number) { // Check if the fraction is mixed, if so convert it to an improper fraction
                mixed_to_improper(*this);
            }
            showFraction();
            cout << " in decimal form is ";
            return (float)numerator/(float)denominator;
        };

    // Virtual function to display fractions, Different for mixed fractions
        virtual void showFraction() const {
            cout << numerator << "/" << denominator  << " ";
        }

    // Friend function to help convert mixed fractions to improper fractions
        friend void mixed_to_improper(Fraction& mixed_fraction);
};

class ProperFraction : public Fraction {
    public:
    ProperFraction(int num, int denum) : Fraction(num, denum) {}
};

class ImproperFraction : public Fraction {
    private:
        bool mixed;

    public:
    // Constructor function to create a Mixed Fraction (whole number is not 0)
        ImproperFraction(int num, int denum, int whole_num) : Fraction(num, denum, whole_num) {
            if (whole_num != 0) {
                mixed = true;
            }
        } 

    // Convert improper fractions into mixed fractions (Eg. 7/2 = 3(1/2))
        void toMixedFraction() {
           if (denominator < numerator) { // Check if the fraction is improper (Denominator < Numerator Eg. 2 < 7)
                whole_number = floor(numerator / denominator);  // Set the whole number ( 2 goes into 7 3 times)
                numerator = numerator - (denominator * whole_number); // Set the numerator to old numerator - whole_number * denominator ( 7 - 2(3) = 1 )
            // Denominator stays the same. Fraction is now 3(1/2)
                mixed = true;
            }
        }
    // Convert mixed fractions to improper fractions (Eg. 3(1/2) = 7/2)
        void toImproperFraction() {
            if (mixed) {
                numerator = (denominator * whole_number) + numerator; // Set numerator ( (2*3) + 1 = 7 )
                whole_number = 0;
            // Denominator stays the same
            }
            mixed = false; // Fraction is no longer mixed
        }

        void showFraction() const {
        // First check if the fraction is mixed or not
            if (whole_number != 0) { // If the improper fraction is mixed 
                cout << whole_number <<"(" << numerator << "/" << denominator << ") ";
            }
            else { // Otherwise display it the regular way
                cout << numerator << "/" << denominator << " ";
            }
        }
};

// Function to convert mixed fractions to improper fractions within the Fraction class
void mixed_to_improper(Fraction& mixed_fraction) {
    ImproperFraction temp(mixed_fraction.numerator, mixed_fraction.denominator, mixed_fraction.whole_number); // Create a temporary improper fraction object
    temp.toImproperFraction(); // Convert it from mixed_fraction to an improper fraction
    mixed_fraction.numerator = temp.numerator; // Update the value of the numerator
    mixed_fraction.whole_number = 0; // Set the whole number to zero
};

int main() {
// List of fractions for the various questions
    ProperFraction fraction1(1,2); // 1/2
    ImproperFraction fraction2(3,4,2); // 2(3/4)
    ImproperFraction fraction3(5,3,0); // 5/3
// Question A (1/2 + 1/2)
    cout << "\tQuestion A: \n";
    Fraction result = fraction1 + fraction1;
    result.showFraction(); // Output: 1/2 + 1/2 = 2/2
    cout << endl << endl;

// Question B (2(3/4) + 5/3)
    cout << "\tQuestion B: \n";
    result = fraction2 + fraction3;
    result.showFraction(); // Output: 11/4  + 5/3  = 53/12
    cout << endl << endl;

// Question C (5/3 * 1/2)
    cout << "\tQuestion C: \n";
    result = fraction3 * fraction1;
    result.showFraction(); // Output: 5/3  * 1/2  = 5/6
    cout << endl << endl;

// Question D (2(3/4) * 5/3)
    cout << "\tQuestion D: \n";
    result = fraction2 * fraction3;
    result.showFraction(); // Output: 11/4  * 5/3  = 55/12
    cout << endl << endl; 

// Question F (1/2 in decimal form)
    cout << "\tQuestion F: \n";
    cout << fraction1.toDecimal(); // Output: 1/2  in decimal form is 0.5
    cout << endl << endl;

// Question G (5/3 in decimal form)
    cout << "\tQuestion G: \n";
    cout << fraction3.toDecimal(); // Output: 5/3  in decimal form is 1.66667
    cout << endl << endl;

    // Question G (2(3/4) in decimal form)
    cout << "\tQuestion H: \n";
    cout << fraction2.toDecimal(); // Output: 11/4  in decimal form is 2.75
    cout << endl << endl;
    return 0;
}
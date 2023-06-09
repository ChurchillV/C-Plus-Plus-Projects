#include <iostream>
using namespace std;

//Create the class Quadrilateral
class Quadrilateral {
    private: //These are members that are only accessible within the scope of the class
        int x,y;

    public: //These can be accessed from anywhere within the programme
        Quadrilateral(int a, int b) { //Set the values of x and y to a and b respectively
            x = a;
            y = b;
        }
        float area() { //Calculate the area of the given quadrilateral
            return x*y;
        }
};

int main() {
    //Create two objects of the Quadrilateral class
    int height,length;
    cout << "Enter height: ";
    cin >> height;
    cout << "Enter length: ";
    cin >> length;
    Quadrilateral square(height,height),rectangle(height,length);
    cout << "Area of rectangle: " << square.area() << endl;
    cout << "Area of square: " << rectangle.area() << endl;
    return 0;
}
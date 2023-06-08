#include <iostream>
using namespace std;

//Create the class Quadrilateral
class Quadrilateral {
    private: //These are members that are only accessible within the scope of the class
        int x,y;
        
    public: //These can be accessed from anywhere within the programme
        void set_values(int a, int b) { //Set the values of x and y to a and b respectively
            x = a;
            y = b;
        }
        float area() { //Calculate the area of the given quadrilateral
            return x*y;
        }
};

int main() {
    //Create two objects from the Quadrilateral class
    Quadrilateral square, rectangle;
    square.set_values(10,10);
    rectangle.set_values(5,10);

    cout << "Area of rectangle: " << square.area() << endl;
    cout << "Area of square: " << rectangle.area() << endl;
    return 0;
}
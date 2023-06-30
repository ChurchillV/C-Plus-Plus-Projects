#include <iostream>
using namespace std;

class CPolygon {
    protected:
        int width, height;
    public:
        void set_values(int a, int b) { width = a, height = b; };
};

//Derived Classes
class CRectangle : public CPolygon {
    public:
        int area() { return width * height; }
};

class CTriangle : public CPolygon {
    public:
        int area() { return (width * height)/2; }
};

int main() {
    CTriangle t1;
    CRectangle r1;
    t1.set_values(10, 5);
    r1.set_values(10, 5);
    cout << "Area of Triangle T1: " << t1.area() << endl;
    cout << "Area of Rectangle R1: " << r1.area() << endl;
    return 0;
}
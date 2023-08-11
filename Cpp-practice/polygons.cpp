#include <iostream>
using namespace std;

class Polygon {
    public:
        virtual float calcArea() const = 0;
        virtual void getDimensions() = 0;
};

class Triangle : public Polygon {
    private:
        float height, base;
    public:
        Triangle() {}
        Triangle(float new_height, float new_base) : height(new_height), base(new_base) {}
        void getDimensions() {
            cout << "\nEnter triangle height: ";
            cin >> height;
            cout << "\nEnter triangle base: ";
            cin >> base;
        }
        float calcArea() const  {
            float area = (height * base) * 0.5;
            return area;
        }
};

class Rectangle : public Polygon {
    private:
        float height, width;
    public: 
        Rectangle() {}
        Rectangle(float new_height, float new_width) : height(new_height), width(new_width) {}
        void getDimensions() {
            cout << "Enter rectangle height: ";
            cin >> height;
            cout << "\nEnter rectangle width: ";
            cin >> width;
        }
        float calcArea() const {
            float area = height * width;
            return area;
        }
};

bool operator<(const Polygon& poly1, const Polygon& poly2) {
            return poly1.calcArea() < poly2.calcArea();
        }
bool operator>(const Polygon& poly1, const Polygon& poly2) {
            return poly1.calcArea() > poly2.calcArea();
        }

int main() {
    int choice;
    Polygon* poly = nullptr;
    while(true) {
        cout << "\n\nChoose a polygon:\n1 - Rectangle\n2 - Triangle\n0 - Exit\nChoice: ";
        cin >> choice;

        if (choice == 0) break;
        switch (choice) {
            case 1:
                poly = new Rectangle;
                poly -> getDimensions();
                cout << "\nArea of rectangle: " << poly -> calcArea();
                break;
            
            case 2: 
                poly = new Triangle;
                poly -> getDimensions();
                cout << "\nArea of triangle: " << poly -> calcArea();
                break;

            default:
                cout << "\nInvalid option\n";
                break;
        }

        if (poly) {
            cout << "\nChoose a Polygon to compare it to:\n1 - Rectangle\n2 - Triangle\nOption: ";
            int option;
            Rectangle *rect1 = new Rectangle();
            Triangle *tri1 = new Triangle();
            cin >> option;
            switch (option) {
                case 1:
                    rect1->getDimensions();
                    cout << "\nArea of new Rectangle: " << rect1 -> calcArea();
                    cout << "\n\nComparing Areas...\n";
                    if(*poly < *rect1) {
                        cout << "\n\nPolygon 1 has a smaller area";
                    }
                    else if (*poly > *rect1) {
                        cout << "\n\nPolygon 1 has a greater area";
                    }
                    else cout << "\n\nBoth polygons have equal area";
                break;
            
                case 2:
                    tri1->getDimensions();
                    cout << "\nArea of new Triangle: " << tri1 -> calcArea();
                    cout << "\n\nComparing Areas...\n";
                    if(*poly < *tri1) {
                        cout << "\n\nPolygon 1 has a smaller area";
                    }
                    else if (*poly > *tri1) {
                        cout << "\n\nPolygon 1 has a greater area";
                    }
                    else cout << "\n\nBoth polygons have equal area";
                break;

                default:
                    cout << "\nInvalid option";
                    break;
            }
            delete rect1;
            delete tri1;
            delete poly;
        }
    }
    return 0;
}
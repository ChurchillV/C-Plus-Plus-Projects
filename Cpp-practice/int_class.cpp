#include <iostream>
using namespace std;

class Int {
    private:
        int data;
    public:
        Int() { data = 0; } // No argument constructor
        Int(int num) { data = num; } // Single argument constructor
        void display() {
            cout << data << endl;
        }
        void set_data(int num) { data = num; }
        int add(Int a, Int b) {
            return a.data + b.data;
        }
};

int main() {
    Int ex1, ex2(5), ex3(4);
    int result = ex1.add(ex2, ex3);
    ex1.set_data(result);
    ex1.display();
    return 0;
}
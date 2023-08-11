#include <iostream>
using namespace std;

class Counter {
    private:
        unsigned int count;
    public: 
        Counter() : count(0) { }
        Counter(int c) : count(c) { }
        unsigned int get_count() const {
            return count;
        }
        Counter operator ++ () { //Prefix
            return Counter(++count);
        }
        Counter operator ++ (int) { //Postfix
            return Counter(count++);
        }
};

int main() {
    Counter c1(3), c2(1);
    cout << "\nc1 = " << c1.get_count(); //-> 3
    cout << "\nc2 = " << c2.get_count(); // -> 1

    c2 = c1++; // c1 -> 4, c2 -> 4
    cout << endl << "c2 = "<< c2.get_count(); // -> 3
    cout << endl << "c1 = " << c1.get_count(); // -> 4

    return 0;
}
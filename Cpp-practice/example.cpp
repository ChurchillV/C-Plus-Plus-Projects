#include <iostream>
using namespace std;

class Student {
    private:
        string name;
        int index_no;
    public:
        Student(string name_input, int index_input) {
            name = name_input;
            index_no = index_input;
        }
        Student() {
            name = "Vince";
            index_no = 765434567;
        }
        void setDetails() {
            cin >> name;
            cin >> index_no;
        }
        void getDetails() {
            cout << "Name: " << name << endl;
            cout << "Index Number: " << index_no << endl;
        }
};
int main() {
    Student Vince;
return 0;
}
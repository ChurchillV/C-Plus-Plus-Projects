#include <iostream>
using namespace std;

    class Employee {
        private:
            int employee_number;
            float compensation;
        public:
            void setData() {
                cout << "Enter Employee Data:\n";
                cout << "Employee Number: \t";
                cin >> employee_number;
                cout << "Employee Compensation: \t";
                cin >> compensation;
            }
            void getData() {
                cout << "Employee Number: " << employee_number << endl;
                cout << "Employee Compensation: " << compensation << endl;
            }
    };

int main() {
    Employee em1, em2, em3;
    em1.setData();
    em2.setData();
    em3.setData();
    em1.getData();
    em2.getData();
    em3.getData();
    return 0;
}
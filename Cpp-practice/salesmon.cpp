#include <iostream>
#include <iomanip>
using namespace std;

const int DISTRICTS = 2, MONTHS = 3;

int main() {
    int sales[DISTRICTS][MONTHS];
    int d,m;
    cout << endl;
    for (d = 0; d < DISTRICTS; d++) {
        for (m = 0; m < MONTHS; m++) {
            cout << "Enter sales for District " << d + 1
            << ", month " << m + 1 << ": "; 
            cin >> sales[d][m];
        }
    }
    cout << "\n\n";
    cout << "\t\t\tMONTH\n";
    cout << setw(20) << 1 << setw(10) << 2 << setw(10) << 3;
    for (d = 0; d < DISTRICTS; d++) {
        cout << "\nDistrict " << d + 1;
        for (m = 0; m < MONTHS; m++) {
            cout << setiosflags(ios::fixed)
            << setiosflags(ios::showpoint)
            << setprecision(2)
            << setw(10)
            << sales[d][m];
        }
    }
    cout << endl;
    return 0;
}
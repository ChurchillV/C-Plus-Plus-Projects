#include <iostream>
#include <string.h>
#include <cctype>
#include <vector>
using namespace std;

class Date {
	private: 
		int month, day, year;
	public:
		void extractDateFromUserInput(string user_input) {
			day = stoi(user_input.substr(0,2));
			month = stoi(user_input.substr(3,2));
			year = stoi(user_input.substr(6,4));
		}

		void getDate() {
			string date;
			cout << "Enter Date(DD/MM/YEAR): ";
			cin >> date;
			extractDateFromUserInput(date);
		}

		void showDate() {
			cout << "Displaying Date..." << endl;
			cout << day << "/" << month << "/" << year << endl;
		}
};

int main() {
	Date new_date;
	new_date.getDate();
	new_date.showDate();
	return 0;
}
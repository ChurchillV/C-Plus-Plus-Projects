#include <iostream>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
using namespace std;

long double mstold(char[]);

int main() {
	bool isProgramOn;
	do {
		cout << "Enter the amount to convert ($ + amount): ";
		char user_input[100];
		cin >> user_input;
		cout << "Amount entered was: " << mstold(user_input) << endl;
		bool isInvalid;
		do {
			cout << "Perform another conversion? (y/n)\nOption > > ";
			char choice;
			cin >> choice;
			switch(choice) {
				case 'y':
					isProgramOn = true;
				break;
				case 'n':
					isProgramOn = false;
				break;
				default: 
					cout << "Invalid option. Try again\n\n";
					isInvalid = true;
				break;
			}
		} while(isInvalid);
	} while(isProgramOn);
	return 0;
}
 
long double mstold(char money_string[]) {
	string filtered_digits;
	for (int i = 0; i < strlen(money_string); i++) {
		if(isdigit(money_string[i]) || money_string[i] == '.') {
			filtered_digits += money_string[i];
		}
	}
	long double raw_value_money = stold(filtered_digits);
	return raw_value_money;
}
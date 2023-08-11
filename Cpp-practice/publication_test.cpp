#include <iostream>
#include <conio.h>
using namespace std;

class Publication {
	protected:
		string title;
	public:
		virtual void putdata() = 0;
		virtual void getdata() = 0;
};

class Book : public Publication {
	private:
		int page_count;
	public:
		void getdata() {
			cout << "\n\nEnter Book Title: ";
			cin >> title;
			cout << "\nEnter Page Count: ";
			cin >> page_count;
		}
		void putdata() {
			cout << "Book Title: " << title;
			cout << "\nPage Count: " << page_count;
		}
};

class Tape : public Publication {
	private:
		float duration;
	public:
		void getdata() {
			cout << "\n\nEnter Tape Title: ";
			cin >> title;
			cout << "\nEnter Duration (minutes.seconds): ";
			cin >> duration;
		}
		void putdata() {
			cout << "Tape Title: " << title;
			cout << "\nTape Duration: " << duration;
		}
};

int main() {
	bool isUserEnteringData = true, isProgramRunning = true;
	Publication* publication_ptr[100];
	do {
		int person_count = 0;
		do {
            cout << "Publication " << person_count + 1 << endl;
			cout << "\nBook (b) or Tape (t)?\nEnter 's' to stop\nOption > >\n\n";
			int choice = getch();
			switch(choice){
			case 98:
				publication_ptr[person_count] = new Book;
				publication_ptr[person_count] -> getdata();
				person_count++;
				isUserEnteringData = true;
				break;
			case 116:
				publication_ptr[person_count] = new Tape;
				publication_ptr[person_count] -> getdata();
                person_count++;
				isUserEnteringData = true;
				break;
			case 115:
				isUserEnteringData = false;
				break;
			default:
				cout << "\n\nInvalid Input.";
				break;
			}
		} while(isUserEnteringData);
		cout << "\n\nDisplaying Publications: \n";
		if (person_count > 0) {
			for(int i = 0; i < person_count; i++) {
				cout << "\n\nPublication " << i+1 << ": \n";
				publication_ptr[i] -> putdata();
			}
		}
		else { cout << "No publications to display.\n"; }
		cout << "\n\nRegister more Publications?(y/n)\nOption > >";
		int option = getch();
		isProgramRunning = (option == 121) ? true : false;
	}while(isProgramRunning);
	return 0;
}
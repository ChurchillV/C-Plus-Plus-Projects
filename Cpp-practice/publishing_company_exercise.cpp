#include <iostream>
using namespace std;

class Publication {
        string title;
        float price;
    public:
        void getData() {
            cout << "\nPulication Title: "; cin >> title;
            cout << "Pulication price: "; cin >> price;
        }
        void putData() {
            cout << "\nTitle: " << title << "\nPrice: " << price;
        }
};

class Book : public Publication {
        int page_count;
    public:
        void getData() {
            Publication::getData();
            cout << "Page count: "; cin >> page_count;
        }
        void putData() {
            Publication::putData();
            cout << "\nPage Count: " << page_count;
        }
};

class Tape : public Publication {
        float playing_time;
    public:
        void getData() {
            Publication::getData();
            cout << "Playing Time: "; cin >> playing_time;
        }
        void putData() {
            Publication::putData();
            cout << "\nPlaying Time: " << playing_time;
        }
};

int main() {
    Book book1;
    Tape tape1;
    book1.getData();
    book1.putData();
    tape1.getData();
    tape1.putData();
return 0;
}
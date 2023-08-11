#include <iostream>
using namespace std;

class Person{
    protected:
        char name[40];
    public:
        void enterName() {
            cout << "Enter person's name: ";
            cin >> name;
        }
        void displayName() {
            cout << "Name: " << name << endl;
        }
        virtual void getData() = 0;
        virtual bool isOutstanding() = 0;
};

class Student : public Person {
    private: 
        float gpa;
    public:
        void getData() {
            Person::enterName();
            cout  << "Enter Student's GPA: ";
            cin >> gpa;
        }
        bool isOutstanding() {
            return (gpa > 3.5) ? true : false;
        }
};

class Professor : public Person {
    private:
        int publication_count;
    public:
        void getData() {
            Person::enterName();
            cout << "Enter number of Publications: ";
            cin >> publication_count;
        }
        bool isOutstanding() {
            return (publication_count > 100) ? true : false;
        }
};
int main() {
    Person* PersonPtr[100];
    int person_count = 0;
    char choice;

    do {
        cout << "Registering a Student (s) or a Professor(p)?\n";
        cin >> choice;

        if(choice == 's') {
            PersonPtr[person_count] = new Student;
        }
        else if (choice == 'p') {
            PersonPtr[person_count] = new Professor;
        }
        else {
            cout << "Invalid Option! Please try again";
            choice = 'y';
        }
        PersonPtr[person_count++] -> getData();
        cout << "Register another person? (y/n)";
        cin >> choice;
    } while(choice == 'y');
    
    for (int j = 0; j < person_count; j++) {
        PersonPtr[j] -> displayName();
        if(PersonPtr[j] -> isOutstanding()) {
            cout << "This person is Outstanding!" << endl;
        }
        else cout << endl;
    }
    return 0;
}
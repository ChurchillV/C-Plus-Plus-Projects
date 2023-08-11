#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

class String{
    private:
        enum { SZ = 80};
        char str[SZ];
    public:
        String() {
            strcpy(str, "");
        }
        String(char s[]) {
            strcpy(str, "");
        }
        void display() {
            cout << str << endl;
        }
        String operator+(String second_string) const {
            String temp;
            if ((strlen(str) + strlen(second_string.str)) < SZ) {
                strcpy(temp.str, str);
                strcat(temp.str, second_string.str);
            }
            else {
                cout << "\nString Overflow\n";
                exit(1);
            }
            return temp;
        }
};

int main() {

    return 0;
}
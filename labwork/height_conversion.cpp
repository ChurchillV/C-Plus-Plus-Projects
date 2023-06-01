#include <iostream>
using namespace std;

//Function declarations and global variables
double cm_height, ft_height;
void height_conversion();

int main() {
    cout << "Height conversion programme" << endl;
    cout << "Enter height in cm: ";
    cin >> cm_height;
    height_conversion();
    return 0;
}

void height_conversion() {
    ft_height = (cm_height/100)*3.28084;
    cout << "Height in feet : " << ft_height << " ft" << endl;
}
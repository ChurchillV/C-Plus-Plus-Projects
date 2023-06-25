#include <iostream>
using namespace std;

void findMinMax(int* arr, int size, int* min, int* max);

int main() {
    int test_array[] = {3,13,56,100,2,5};
    int size = sizeof(test_array)/sizeof(test_array[0]);
    int min_val, max_val;
    findMinMax(test_array, size, &min_val, &max_val);
    cout << "Size of array: " << size << endl;
    cout << "Smallest member is: " << min_val << endl;
    cout << "Largest member is: " << max_val << endl;
    return 0;
}

void findMinMax(int* arr, int size, int* min, int* max) {
    *min = *max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if(arr[i] > *max) {
            *max = arr[i];
        }
    }
}
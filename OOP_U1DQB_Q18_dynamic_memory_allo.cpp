//Explain dynamic memory allocation and explain its use in c++ with example
#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter array size: ";
    cin >> size;

    // Dynamically allocating memory for array on heap
    int *arr = new int[size];

    for (int i = 0; i < size; i++) {
        arr[i] = (i + 1) * 10;
        cout << arr[i] << " ";
    }
    cout << endl;

    // Freeing allocated memory
    delete[] arr;
    return 0;
}

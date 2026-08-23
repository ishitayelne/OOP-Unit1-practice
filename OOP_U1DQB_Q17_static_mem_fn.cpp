//Explain static member function with its significance and write a program to calculate the number of objects created
#include <iostream>
using namespace std;

class ObjectCounter {
private:
    static int count; // Static member variable declaration

public:
    ObjectCounter() {
        count++;
    }

    // Static member function
    static void displayCount() {
        cout << "Total objects created: " << count << endl;
    }
};

// Initializing static data member outside class
int ObjectCounter::count = 0;

int main() {
    ObjectCounter obj1, obj2, obj3;

    // Called using Class Name
    ObjectCounter::displayCount(); 
    return 0;
}

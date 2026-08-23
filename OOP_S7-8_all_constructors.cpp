//All constructors
#include <iostream>
using namespace std;

class Sample {
private:
    int* value; // Pointer for dynamic memory allocation

public:
    // 1. Default Constructor
    Sample() {
        value = new int(0); // Dynamic allocation with default value
    }

    // 2. Parameterized Constructor
    Sample(int v) {
        value = new int(v);
    }

    // 3. Dynamic Constructor
    // Allocates memory on heap dynamically at object creation
    Sample(double v) {
        value = new int(static_cast<int>(v));
    }

    // 4. Copy Constructor (Deep Copy)
    Sample(const Sample &obj) {
        value = new int(*(obj.value));
    }

    // Destructor to free dynamically allocated memory
    ~Sample() {
        delete value;
    }

    void display() { 
        cout << "Value: " << *value << endl; 
    }
};

int main() {
    Sample s1;            // Default Constructor
    Sample s2(100);       // Parameterized Constructor
    Sample s3(45.5);      // Dynamic Constructor
    Sample s4 = s2;       // Copy Constructor

    s1.display(); // Value: 0
    s2.display(); // Value: 100
    s3.display(); // Value: 45
    s4.display(); // Value: 100

    return 0;
}

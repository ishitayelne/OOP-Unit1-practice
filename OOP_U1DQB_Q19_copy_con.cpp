//write a program to explain the use of copy constructor
#include <iostream>
using namespace std;

class Sample {
private:
    int val;

public:
    Sample(int v) { val = v; } // Parameterized Constructor

    // Copy Constructor
    Sample(const Sample &obj) {
        val = obj.val;
    }

    void display() { cout << "Value: " << val << endl; }
};

int main() {
    Sample obj1(100);
    Sample obj2 = obj1; // Copy constructor invoked

    obj1.display();
    obj2.display();
    return 0;
}

//Constructor
#include <iostream>
using namespace std;

class integer {
    int m, n;

public:
    // Constructor declaration
    integer(void);

    // Function to display values
    void display() {
        cout << "m = " << m << endl;
        cout << "n = " << n << endl;
    }
};

// Constructor definition outside the class using scope resolution operator
integer :: integer(void) {
    m = 0;
    n = 0;
}

int main() {
    integer int1; // Object creation triggers default constructor

    cout << "Values after default initialization:" << endl;
    int1.display();

    return 0;
}

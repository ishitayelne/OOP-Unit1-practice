//Write a program which defines default constructor, parameterized constructor and destructor
#include <iostream>
using namespace std;

class Person {
private:
    int age;

public:
    // Default Constructor
    Person() {
        age = 0;
        cout << "Default Constructor Called" << endl;
    }

    // Parameterized Constructor
    Person(int a) {
        age = a;
        cout << "Parameterized Constructor Called with Age: " << age << endl;
    }

    // Destructor
    ~Person() {
        cout << "Destructor Called for Age: " << age << endl;
    }
};

int main() {
    Person p1;      // Calls Default Constructor
    Person p2(25);  // Calls Parameterized Constructor
    return 0;
}

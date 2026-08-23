//Explain public , private, protected keywords using program.
#include <iostream>
using namespace std;

class Base {
private:
    int prv = 10;   // Accessible ONLY inside Base class
protected:
    int prt = 20;   // Accessible inside Base class and Derived class
public:
    int pub = 30;   // Accessible from ANYWHERE outside class
};

class Derived : public Base {
public:
    void display() {
        // cout << prv; // ERROR: Private member not accessible
        cout << "Protected: " << prt << endl; // Accessible in Derived class
        cout << "Public: " << pub << endl;       // Accessible
    }
};

int main() {
    Derived obj;
    obj.display();
    cout << "Direct Public Access: " << obj.pub << endl;
    return 0;
}

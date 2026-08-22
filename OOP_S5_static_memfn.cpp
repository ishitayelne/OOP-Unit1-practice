//Static member function
//Write a program to calculate the number of objects created
#include <iostream>
using namespace std;

class Test
{
    static int count;

  public:
    Test() { count++; } // Increments count automatically when obj is created

    static void showCount() {
        cout << "Total objects: " << count << endl;
    }
};

int Test::count = 0;

int main() {
    int n;
    cout << "Enter number of objects: ";
    cin >> n;

    Test obj[n]; // Creates 'n' obj

    Test::showCount();

    return 0;
}

//Array of objects
#include <iostream>
#include <string>
using namespace std;

class Book {
    string bookName;
    double cost;

public:
    void getdetails() {
        cout << "\nEnter Book Name: ";
        cin >> bookName;
        cout << "Enter Cost: ";
        cin >> cost;
    }

    void putdetails() {
        cout << "Book Name: " << bookName << ", Cost: " << cost << endl;
    }
};

int main() {
    Book bk[3]; // Declares an array of 3 Book objects

    // Input details for each book
    for (int i = 0; i < 3; i++) {
        cout << "\nEnter details for Book " << i + 1 << ": ";
        bk[i].getdetails();
    }

    // Display details of each book
    cout << "\n--- Book Details ---" << endl;
    for (int i = 0; i < 3; i++) {
        bk[i].putdetails();
    }

    return 0;
}

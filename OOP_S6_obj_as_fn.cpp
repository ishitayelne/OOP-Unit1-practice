//Object as function
#include <iostream>
using namespace std;

class Time {
    int hrs, mins;

public:
    void accept(int h, int m) {
        hrs = h;
        mins = m;
    }

    void display(void) {
        cout << hrs << "\t" << mins << endl;
    }

    void sum(Time, Time);
};

void Time::sum(Time A, Time B) {
    mins = A.mins + B.mins;
    hrs = mins / 60;
    mins = mins % 60;
    hrs = hrs + A.hrs + B.hrs;
}

int main() {
    Time t1, t2, t3;

    t1.accept(2, 30);
    t2.accept(3, 45);

    t3.sum(t1, t2);

    t1.display();
    t2.display();
    t3.display();

    return 0;
}

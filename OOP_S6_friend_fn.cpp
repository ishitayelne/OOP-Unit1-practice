//Friend function
#include <iostream>
using namespace std;

class data {
    int a, b;

public:
    void input() { 
        a = 10; 
        b = 20; 
    }

    friend float average(data x);
};

float average(data x) { 
    return (x.a + x.b) / 2.0; 
}

int main() {
    data p;
    p.input();

    cout << "\n\nAverage value is: " << average(p) << "\n\n" << endl;

    return 0;
}

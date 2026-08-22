#include <iostream>
using namespace std;

class Sample  // define a class
{
  private:
    int age;
  public:
    void displayAge(int a)
    {
      age = a;
      cout << "Age = " << age << endl;
    }
};

int main() {
  int ageInput; // declare an object
  Sample obj1;
  cout << "Enter your age: ";
  cin >> ageInput;
  obj1.displayAge(ageInput);
  return 0;
}

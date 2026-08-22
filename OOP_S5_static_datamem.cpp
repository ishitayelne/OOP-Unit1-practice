//Static data member
#include <iostream>
using namespace std;

class material
{
  int id;
  static int count; // Declaration of a static data member

  public:
    void getdata(int a)
    {
      id=a;
      count++; // Increment count
    }
    void display()
    {
      cout << "\nCount: " << count ;
    }
};

// Definition and initialization of the static data member outside the class
int material :: count;

int main()
{
  material A,B,C;
  
  A.display();
  B.display();
  C.display();
    
  A.getdata(100);
  B.getdata(200);
  C.getdata(300);
  
  cout<<"\n\nAfter reading values: ";
  
  A.display();
  B.display();
  C.display();
  return 0;
}

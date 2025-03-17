#include <iostream>

using namespace std;

class X
{
public:
  int m1, m2;

  void f(int k1, int k2)
  {
    m1 = k1;       // Implicit access
    this->m2 = k2; // Explicit access
    cout << "Id   = " << this << endl;
  }
};

int main()
{
  X a;
  a.f(2, 3);

  cout << "Addr = " << &a << endl;
  cout << "a.m1 = " << a.m1 << " a.m2 = " << a.m2 << endl;

  return 0;
}

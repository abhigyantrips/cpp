#include <iostream>

using namespace std;

class A
{
public:
  int i;
};
class B
{
public:
  double d;
};

int main()
{
  A a;
  B b;

  a.i = 5;
  b.d = 7.2;

  A *p = &a;
  B *q = &b;

  cout << p->i << endl;
  cout << q->d << endl;

  p = (A *)&b;
  q = (B *)&a;

  cout << p->i << endl;
  cout << q->d << endl;
}

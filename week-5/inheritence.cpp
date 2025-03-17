#include <string>

using namespace std;

class Base
{
public:
  void f(int i);
  void g(int i);
};

class Derived : public Base
{
public:
  void f(int);      // Override
  void f(string &); // Overload
};

int main()
{
  Base b;
  Derived d;

  b.f(1);
  b.g(2);

  d.f(3);
  d.g(4);

  return 0;
}

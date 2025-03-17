#include <iostream>

using namespace std;

class B
{
public:
  B() { cout << "B "; }
  ~B() { cout << "~B "; }
};

class C
{
public:
  C() { cout << "C "; }
  ~C() { cout << "~C "; }
};

class D : public B
{
  C data_;

public:
  D() { cout << "D "; }
  ~D() { cout << "~D "; }
};

int main()
{
  D d;

  return 0;
}

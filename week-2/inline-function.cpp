#include <iostream>

using namespace std;

inline int SQUARE(int x) { return x * x; }

int main()
{
  int a = 3;
  int b = SQUARE(++a);

  cout << "Square is " << b << endl;

  return 0;
}

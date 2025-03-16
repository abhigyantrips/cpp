#include <iostream>

using namespace std;

#define SQUARE(x) x * x

int main() {
  int a = 3;
  int b = SQUARE(a);

  cout << "Square is " << b << endl;

  return 0;
}

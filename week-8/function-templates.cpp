#include <iostream>
#include <string>

using namespace std;

template <typename T>
T maximum(T a, T b)
{
  return (a > b) ? a : b;
}

template <typename T>
void swap_values(T &a, T &b)
{
  T temp = a;
  a = b;
  b = temp;
}

int main()
{
  int i1 = 5, i2 = 10;
  double d1 = 3.14, d2 = 2.71;
  string s1 = "Hello", s2 = "World";

  cout << "Maximum of ints " << i1 << " and " << i2 << " is: " << maximum(i1, i2) << endl;
  cout << "Maximum of doubles " << d1 << " and " << d2 << " is: " << maximum(d1, d2) << endl;
  cout << "Maximum of strings \"" << s1 << "\" and \"" << s2 << "\" is: \"" << maximum(s1, s2) << "\"" << endl;

  cout << "\nBefore swap_values:" << endl;
  cout << "i1 = " << i1 << ", i2 = " << i2 << endl;
  cout << "d1 = " << d1 << ", d2 = " << d2 << endl;

  swap_values(i1, i2);
  swap_values(d1, d2);

  cout << "\nAfter swap_values:" << endl;
  cout << "i1 = " << i1 << ", i2 = " << i2 << endl;
  cout << "d1 = " << d1 << ", d2 = " << d2 << endl;

  return 0;
}

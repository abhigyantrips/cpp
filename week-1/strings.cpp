#include <iostream>
#include <string>

using namespace std;

int main() {
  string something = "something";

  cout << "String is: " << something << endl;
  cout << "Char at index 4: " << something[4] << endl;
  cout << "Char at index 4: " << something.at(4) << endl;

  return 0;
}

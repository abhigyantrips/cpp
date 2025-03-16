#include <iostream>
#include <cmath>

using namespace std;

class Complex {
  public:
    double re, im;

    double normal() {
      return sqrt(re*re + im*im);
    }

    void print() {
      cout << "|" << re << " + " << im << "j| = ";
      cout << normal();
    }
};

int main() {
  Complex c = { 4.2, 5.3 };
  c.print();

  return 0;
}

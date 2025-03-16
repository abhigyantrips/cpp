#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int num = 5;
  int arr[] = { 1, 2, 3, 4, 5 };
  int k = 3;

  bool found = binary_search(arr, arr+num, k);

  if (found)
    cout << "Found!" << endl;
  else
    cout << "Not Found!" << endl;

  return 0;
}

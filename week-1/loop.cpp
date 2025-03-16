#include <iostream>
#include <vector>

using namespace std;

int main() {
  int num;
  vector<int> arr;

  cout << "Enter number of values: ";
  cin >> num;

  arr.resize(num);

  cout << "Enter the numbers:" << endl;
  for (int i = 0; i < num; i++) {
    cin >> arr[i];
  }

  cout << "Array is:" << endl;
  for (int i = 0; i < num; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}

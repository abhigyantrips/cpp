#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int i, int j) {
  return (i > j);
}

int main() {
  int num = 5;
  int arr[] = { 5, 4, 1, 3, 2 };

  sort(arr, arr+num, compare);

  cout << "Array is:" << endl;
  for (int i = 0; i < num; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}

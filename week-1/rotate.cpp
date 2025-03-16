#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int arr[] = { 1, 2, 3, 4, 5 };

  rotate(arr, arr+2, arr+5);

  for (int i = 0; i < 5; i++)
    cout << arr[i] << " ";

  return 0;
}

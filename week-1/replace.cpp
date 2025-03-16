#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int arr[] = { 1, 2, 3, 4, 5 };

  replace(arr, arr+5, 3, 2);

  for (int i = 0; i < 5; i++)
    cout << arr[i] << " ";

  return 0;
}

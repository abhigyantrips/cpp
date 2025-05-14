#include <iostream>
#include <vector>
#include <algorithm> // For std::transform

using namespace std;

// A class that defines operator(), making its objects functors
class MultiplyBy
{
private:
  int factor; // State held by the functor

public:
  // Constructor to initialize the state
  MultiplyBy(int f) : factor(f) {}

  // Overload the function-call operator
  int operator()(int val) const
  {
    return val * factor;
  }
};

// Another simple functor for demonstration
class AddConstant
{
private:
  int constant;

public:
  AddConstant(int c) : constant(c) {}

  int operator()(int val) const
  {
    return val + constant;
  }
};

int main()
{
  // Example 1: Calling a functor object directly
  MultiplyBy multiplier(10); // Create a functor object with factor = 10

  int result = multiplier(5);                          // Call the functor like a function
  cout << "Calling multiplier(5): " << result << endl; // Output: 50

  result = multiplier(12);
  cout << "Calling multiplier(12): " << result << endl; // Output: 120

  cout << endl;

  // Example 2: Using a functor with a standard algorithm (std::transform)
  vector<int> numbers = {1, 2, 3, 4, 5};
  vector<int> transformed_numbers(numbers.size());

  // Create a functor object with state (multiply by 3)
  MultiplyBy multiply_by_three(3);

  // Use std::transform with the functor
  // It applies the functor to each element of the input range
  // and stores the result in the output range.
  transform(numbers.begin(), numbers.end(), transformed_numbers.begin(), multiply_by_three);

  cout << "Original numbers: ";
  for (int n : numbers)
  {
    cout << n << " ";
  }
  cout << endl;

  cout << "Transformed numbers (multiplied by 3): ";
  for (int n : transformed_numbers)
  {
    cout << n << " ";
  }
  cout << endl;

  cout << endl;

  // Example 3: Using another functor with std::transform
  vector<int> numbers_again = {10, 20, 30, 40};
  vector<int> transformed_again(numbers_again.size());

  AddConstant add_five(5);

  transform(numbers_again.begin(), numbers_again.end(), transformed_again.begin(), add_five);

  cout << "Original numbers: ";
  for (int n : numbers_again)
  {
    cout << n << " ";
  }
  cout << endl;

  cout << "Transformed numbers (added 5): ";
  for (int n : transformed_again)
  {
    cout << n << " ";
  }
  cout << endl;

  return 0;
}

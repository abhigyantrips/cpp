#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

class MyCustomError : public runtime_error
{
public:
  MyCustomError(const string &msg) : runtime_error(msg) {}
};

void potentiallyFailingFunction(int value)
{
  cout << "Entering potentiallyFailingFunction with value: " << value << endl;

  if (value < 0)
  {
    throw runtime_error("Negative value not allowed!");
  }
  else if (value == 0)
  {
    throw MyCustomError("Value zero is explicitly forbidden!");
  }
  else if (value > 100)
  {
    throw 99;
  }

  cout << "Function finished successfully." << endl;
}

int main()
{
  cout << "--- Testing value 10 (success) ---" << endl;
  try
  {
    potentiallyFailingFunction(10);
  }
  catch (const runtime_error &e)
  {
    cerr << "Caught a standard runtime error: " << e.what() << endl;
  }
  catch (const MyCustomError &e)
  {
    cerr << "Caught a custom error: " << e.what() << endl;
  }
  catch (int error_code)
  {
    cerr << "Caught an integer error code: " << error_code << endl;
  }
  catch (...)
  {
    cerr << "Caught an unknown exception." << endl;
  }
  cout << "--- End of test 10 ---\n"
       << endl;

  cout << "--- Testing value -5 (runtime_error) ---" << endl;
  try
  {
    potentiallyFailingFunction(-5);
  }
  catch (const runtime_error &e)
  {
    cerr << "Caught a standard runtime error: " << e.what() << endl;
  }
  catch (const MyCustomError &e)
  {
    cerr << "Caught a custom error: " << e.what() << endl;
  }
  catch (int error_code)
  {
    cerr << "Caught an integer error code: " << error_code << endl;
  }
  catch (...)
  {
    cerr << "Caught an unknown exception." << endl;
  }
  cout << "--- End of test -5 ---\n"
       << endl;

  cout << "--- Testing value 0 (MyCustomError) ---" << endl;
  try
  {
    potentiallyFailingFunction(0);
  }
  catch (const runtime_error &e)
  {
    cerr << "Caught a standard runtime error: " << e.what() << endl;
  }
  catch (const MyCustomError &e)
  {
    cerr << "Caught a custom error: " << e.what() << endl;
  }
  catch (int error_code)
  {
    cerr << "Caught an integer error code: " << error_code << endl;
  }
  catch (...)
  {
    cerr << "Caught an unknown exception." << endl;
  }
  cout << "--- End of test 0 ---\n"
       << endl;

  cout << "--- Testing value 200 (int) ---" << endl;
  try
  {
    potentiallyFailingFunction(200);
  }
  catch (const runtime_error &e)
  {
    cerr << "Caught a standard runtime error: " << e.what() << endl;
  }
  catch (const MyCustomError &e)
  {
    cerr << "Caught a custom error: " << e.what() << endl;
  }
  catch (int error_code)
  {
    cerr << "Caught an integer error code: " << error_code << endl;
  }
  catch (...)
  {
    cerr << "Caught an unknown exception." << endl;
  }
  cout << "--- End of test 200 ---\n"
       << endl;

  return 0;
}

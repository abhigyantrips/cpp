#include <iostream>
#include <string>

using namespace std;

template <typename T>
class Box
{
private:
  T content;

public:
  Box(T val) : content(val)
  {
    // cout << "Box constructor called with content: " << content << endl;
  }

  void setContent(T val)
  {
    content = val;
  }

  T getContent() const
  {
    return content;
  }

  void displayContent() const
  {
    cout << "Box contains: " << content << endl;
  }
};

int main()
{
  // Create a Box for int
  Box<int> intBox(123);
  cout << "Created intBox." << endl;
  intBox.displayContent();

  intBox.setContent(456);
  cout << "Set new content for intBox." << endl;
  intBox.displayContent();
  cout << "Retrieved content from intBox: " << intBox.getContent() << endl;

  cout << endl;

  // Create a Box for string
  Box<string> stringBox("Template Example");
  cout << "Created stringBox." << endl;
  stringBox.displayContent();

  stringBox.setContent("Another string");
  cout << "Set new content for stringBox." << endl;
  stringBox.displayContent();
  cout << "Retrieved content from stringBox: " << stringBox.getContent() << endl;

  cout << endl;

  // Create a Box for double
  Box<double> doubleBox(98.76);
  cout << "Created doubleBox." << endl;
  doubleBox.displayContent();

  doubleBox.setContent(54.321);
  cout << "Set new content for doubleBox." << endl;
  doubleBox.displayContent();
  cout << "Retrieved content from doubleBox: " << doubleBox.getContent() << endl;

  return 0;
}

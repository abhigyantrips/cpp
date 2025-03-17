#include <iostream>
#include <vector>

using namespace std;

class Stack
{
private:
  vector<char> data_;
  int top_;

public:
  Stack() : top_(-1)
  {
    data_.resize(100);
  }

  ~Stack() {}

  int empty()
  {
    return (top_ == -1);
  }

  void push(char x)
  {
    data_[++top_] = x;
  }

  void pop()
  {
    --top_;
  }

  char top()
  {
    return data_[top_];
  }
};

int main()
{
  Stack s;
  char str[10] = "ABCDE";

  for (int i = 0; i < 5; i++)
    s.push(str[i]);

  while (!s.empty())
  {
    cout << s.top();
    s.pop();
  }

  return 0;
}

class MyClass
{
protected:
  MyClass() {}
  ~MyClass() {}

private:
  MyClass(const MyClass &);
  MyClass &operator=(const MyClass &);
};

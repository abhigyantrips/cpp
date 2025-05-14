#include <iostream>

class Base1
{
public:
  Base1()
  {
    std::cout << "Base1 constructor called." << std::endl;
  }
  void method1() const
  {
    std::cout << "Calling Base1::method1" << std::endl;
  }
  void common_method() const
  {
    std::cout << "Calling Base1::common_method" << std::endl;
  }
};

class Base2
{
public:
  Base2()
  {
    std::cout << "Base2 constructor called." << std::endl;
  }
  void method2() const
  {
    std::cout << "Calling Base2::method2" << std::endl;
  }
  void common_method() const
  {
    std::cout << "Calling Base2::common_method" << std::endl;
  }
};

class Derived : public Base1, public Base2
{
public:
  Derived()
  {
    std::cout << "Derived constructor called." << std::endl;
  }

  void derivedMethod() const
  {
    std::cout << "Calling Derived::derivedMethod" << std::endl;
  }
};

int main()
{
  Derived obj;

  std::cout << "\nAccessing members from parents:" << std::endl;

  obj.method1();

  obj.method2();

  obj.derivedMethod();

  std::cout << "\nHandling ambiguity for common_method:" << std::endl;

  obj.Base1::common_method();
  obj.Base2::common_method();

  return 0;
}

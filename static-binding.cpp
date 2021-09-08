// No equivalent Java implementation because static binding of instance methods is not supported in Java
#include <iostream>
using namespace std;
class A {
  public:
    void funcX() { cout << "funcX in A" << endl; }
    void funcY() { cout << "funcY in A" << endl; }
};

class B : public A {
  public:
    void funcY() { cout << "funcY in B" << endl; }
};

int main() {
  A* ptr = new B;
  ptr->funcY();
  delete ptr;
  return 0;
}
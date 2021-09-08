// dynamic-binding.cpp
#include <iostream>
using namespace std;
class A {
  public:
    void funcX() { cout << "funcX in A" << endl; }
    virtual void funcY() { cout << "funcY in A" << endl; }
};
	
class B : public A {
  public:
    virtual void funcY() { cout << "funcY in B" << endl; }
};

int main() {
  A* ptr = new B;
  ptr->funcY();
  delete ptr;
  return 0;
}
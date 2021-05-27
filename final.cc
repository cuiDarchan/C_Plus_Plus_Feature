#include <iostream>

class Base {
 public:
  virtual void print() = 0;
};

class A : public Base {
 public:
  void print() final { std::cout << "A -- final" << std::endl; }
};

class B : public A {
 public:
//   void print() { std::cout << "B -- final" << std::endl; }
};

int main(int argc, char **argv) { 
    
    A a;
    a.print();
    return 0;    
}

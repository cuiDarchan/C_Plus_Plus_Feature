/**
 * Reference: https://subingwen.cn/cpp/final/#1-2-%E4%BF%AE%E9%A5%B0%E7%B1%BB
 */

#include <iostream>

// override：重写基类中的虚函数。防止误操作（写错参数名或者函数名等），此时编译器会报错，提高程序可读性，降低出错率。

class Base {
 public:
  virtual void test() { std::cout << "Base" << std::endl; }
};

class Son : public Base {
 public:
  void test() override { std::cout << "Son override" << std::endl; }
};

class GrandSon : public Son {
 public:
  void test() override { std::cout << "GrandSon override" << std::endl; }
};

int main(int argc, char** argv) {
  Base b;
  b.test();
  Son s;
  s.test();
  GrandSon gs;
  gs.test();
  return 0;
}

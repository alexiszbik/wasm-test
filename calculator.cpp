#include <emscripten/bind.h>
using namespace emscripten;

class Calculator {
public:
  Calculator(int base) : baseValue(base) {}

  int add(int x) const {
    return baseValue + x;
  }

  void setBase(int base) {
    baseValue = base;
  }

private:
  int baseValue;
};

// Binding
EMSCRIPTEN_BINDINGS(my_module) {
  class_<Calculator>("Calculator")
    .constructor<int>()
    .function("add", &Calculator::add)
    .function("setBase", &Calculator::setBase);
}
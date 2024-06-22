// Entry point to test math functions

#include <iostream>
#include "math.hpp"

int main() {
  int a = 4;
  int b = 8;

  std::cout << "Math Functions" << std::endl;
  std::cout << "--------------" << std::endl;
  std::cout << "a = " << a << " | b = " << b << '\n' << std::endl;

  std::cout << "a + b = " << add(a, b) << std::endl;
  std::cout << "a - b = " << sub(a, b) << std::endl;

  return 0;
}

#include <iostream>

int main() {
  int a = 0;
  int b = 0;

  std::cin >> a >> b;

  if (a <= 0 || b <= 0 || a > 10000 || b > 10000) return 1;
  std::cout << a + b << std::endl;
  std::cout << a - b << std::endl;
  std::cout << a * b << std::endl;
  std::cout << a / b << std::endl;
  std::cout << a % b << std::endl;

  return 0;
}
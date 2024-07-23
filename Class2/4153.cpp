#include <cmath>
#include <iostream>

int main() {
  unsigned long a, b, c;
  while (true) {
    if (!(std::cin >> a >> b >> c)) return 1;
    if (a == 0 && b == 0 && c == 0) return 0;
    if (std::pow(a, 2) + std::pow(b, 2) == std::pow(c, 2) ||
        std::pow(b, 2) + std::pow(c, 2) == std::pow(a, 2) ||
        std::pow(a, 2) + std::pow(c, 2) == std::pow(b, 2))
      std::cout << "right";
    else
      std::cout << "wrong";
    std::cout << std::endl;
  }
  return 0;
}
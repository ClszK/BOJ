#include <iostream>

int main() {
  unsigned long R, S;
  if (!(std::cin >> R >> S)) return 1;
  std::cout << R * 8 + S * 3 - 28 << std::endl;
  return 0;
}
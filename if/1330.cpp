#include <cstdlib>
#include <iostream>

int main() {
  int a, b;
  std::cin >> a >> b;
  if (std::abs(a) > 10000 || std::abs(b) > 10000) return 1;

  if (a > b)
    std::cout << ">" << std::endl;
  else if (a < b)
    std::cout << "<" << std::endl;
  else if (a == b)
    std::cout << "==" << std::endl;

  return 0;
}
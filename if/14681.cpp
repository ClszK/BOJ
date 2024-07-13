#include <cstdlib>
#include <iostream>

int main() {
  int x, y;

  std::cin >> x >> y;
  if (std::abs(x) > 1000 || std::abs(y) > 1000 || x * y == 0)
    return 1;

  if (x > 0) {
    (y > 0 ? std::cout << "1" << std::endl
           : std::cout << "4" << std::endl);
  } else {
    (y > 0 ? std::cout << "2" << std::endl
           : std::cout << "3" << std::endl);
  }

  return 0;
}
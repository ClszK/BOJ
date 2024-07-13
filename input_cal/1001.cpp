#include <cstdlib>
#include <iostream>

int main() {
  int a = 0;
  int b = 0;

  std::cin >> a >> b;

  if ((std::abs(a) > 10 && a == 0) ||
      (std::abs(b) > 10 && b == 0))
    return 1;
  std::cout << a - b << std::endl;

  return 0;
}
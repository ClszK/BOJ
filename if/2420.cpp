#include <cmath>
#include <iostream>

int main() {
  long n, m;
  std::cin >> n >> m;
  if (std::abs(n) > 2000000000 || std::abs(n) > 2000000000)
    return 1;
  std::cout << std::abs(n - m) << std::endl;
  return 0;
}
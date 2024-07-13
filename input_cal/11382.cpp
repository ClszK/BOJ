#include <cmath>
#include <iostream>

int main() {
  unsigned long long a, b, c;
  unsigned long long max = std::pow(10, 12);
  std::cin >> a >> b >> c;
  if (a < 1 || b < 1 || c < 1 || a > max || b > max || c > max)
    return 1;
  std::cout << a + b + c << std::endl;
  return 0;
}
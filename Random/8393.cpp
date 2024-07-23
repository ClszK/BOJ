#include <iostream>

int main() {
  int n;
  long sum = 0;

  if (!(std::cin >> n) || n < 1 || n > 10000) return 1;
  for (int i = 1; i <= n; ++i) {
    sum += static_cast<long>(i);
  }
  std::cout << sum << std::endl;
  return 0;
}
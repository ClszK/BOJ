#include <iostream>

int main() {
  int N;
  unsigned long sum = 1;
  std::cin >> N;

  if (N < 0 || N > 12) return 1;
  for (int i = 1; i <= N; ++i) sum *= i;
  std::cout << sum << std::endl;
  return 0;
}
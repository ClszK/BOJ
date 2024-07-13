#include <iostream>

int main() {
  long N;

  std::cin >> N;
  if (N <= 0 || N > 100000) return 1;
  for (int i = 1; i <= N; i++) std::cout << i << "\n";
  return 0;
}
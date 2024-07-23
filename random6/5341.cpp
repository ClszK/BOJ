#include <iostream>

long pyramid(long N) {
  if (N == 1) return 1;
  return N + pyramid(N - 1);
}

int main() {
  long N;
  while (true) {
    if (!(std::cin >> N) || N < 0) return 1;
    if (N == 0) return 0;
    std::cout << pyramid(N) << std::endl;
  }
  return 0;
}
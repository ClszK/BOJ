#include <iostream>

int main() {
  int N;

  std::cin >> N;
  if (N < 1 || N > 100) return 1;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j <= i; j++) std::cout << "*";
    std::cout << std::endl;
  }

  return 0;
}
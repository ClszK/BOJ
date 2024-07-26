#include <iostream>

int factorial(int n) {
  if (n <= 1) return 1;
  return n * factorial(n - 1);
}

int main() {
  int N, K;

  std::cin >> N >> K;

  std::cout << factorial(N) / (factorial(K) * (factorial(N - K))) << std::endl;

  return 0;
}
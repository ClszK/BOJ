#include <iostream>

int recursionNum(int num) {
  if (num / 10 == 0) return num;
  return num % 10 + recursionNum(num / 10);
}

int main() {
  int N, M;

  if (!(std::cin >> N) || N < 1 || N > 1000000) return 1;
  for (int i = 1; i < N; ++i) {
    if (i + recursionNum(i) == N) {
      std::cout << i << std::endl;
      return 0;
    }
  }
  std::cout << 0 << std::endl;
  return 0;
}
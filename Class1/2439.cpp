#include <iostream>

int main() {
  int N;
  if (!(std::cin >> N) || N < 1 || N > 100) return 1;
  for (int i = N; i >= 1; --i) {
    for (int j = 1; j <= N; ++j) {
      if (i > j)
        std::cout << " ";
      else
        std::cout << "*";
    }
    std::cout << std::endl;
  }
  return 0;
}
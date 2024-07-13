#include <iostream>

int main() {
  int T, A, B;

  std::cin >> T;
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  if (T <= 0 || T > 10000000) return 1;
  for (int i = 0; i < T; ++i) {
    std::cin >> A >> B;
    if (A < 1 || A > 1000 || B < 1 || B > 1000) return 1;
    std::cout << A + B << "\n";
  }
  return 0;
}
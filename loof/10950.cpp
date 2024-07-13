#include <iostream>

int main() {
  int N;
  std::cin >> N;
  if (N <= 0) return 1;
  for (int i = 0; i < N; ++i) {
    int A, B;
    std::cin >> A >> B;
    if (A <= 0 || A >= 10 || A <= 0 || A >= 10) return 1;
    std::cout << A + B << "\n";
  }
  return 0;
}
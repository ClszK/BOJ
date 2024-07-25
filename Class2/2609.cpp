#include <algorithm>
#include <iostream>

int gcd(int a, int b) {
  if (a % b == 0) return b;
  return gcd(b, a % b);
}

int main() {
  int N, M;
  int gcdVal;

  std::cin >> N >> M;

  gcdVal = gcd(std::max(N, M), std::min(N, M));
  std::cout << gcdVal << std::endl;
  std::cout << N * M / gcdVal << std::endl;

  return 0;
}
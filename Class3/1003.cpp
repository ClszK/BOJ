#include <iostream>
#include <map>

std::map<int, std::pair<int, int> > dp;

std::pair<int, int> fibonacci(int n) {
  if (n == 0) return std::make_pair(1, 0);
  if (n == 1) return std::make_pair(0, 1);

  if (dp.find(n) != dp.end()) return dp[n];

  auto p1 = fibonacci(n - 1);
  auto p2 = fibonacci(n - 2);

  return dp[n] = std::make_pair(p1.first + p2.first, p1.second + p2.second);
}

int main() {
  int T, N;
  std::cin >> T;

  while (T--) {
    std::cin >> N;
    auto result = fibonacci(N);
    std::cout << result.first << " " << result.second << '\n';
  }
  return 0;
}
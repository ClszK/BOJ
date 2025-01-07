#include <iostream>
#include <vector>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int N, T;

  std::cin >> T;

  std::vector<unsigned long> dp(101, 0);

  dp[0] = 1;
  dp[1] = 1;
  dp[2] = 1;
  dp[3] = 1;
  for (int i = 0; i < T; ++i) {
    std::cin >> N;

    for (int j = 4; j <= N; ++j) {
      if (!dp[j]) dp[j] = dp[j - 2] + dp[j - 3];
    }

    std::cout << dp[N] << '\n';
  }

  return 0;
}
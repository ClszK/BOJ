#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int T;

  std::vector<int> dp(275, -1);
  std::cin >> T;

  dp[0] = 1;
  dp[1] = 1;
  dp[2] = 2;
  dp[3] = 4;
  for (int i = 0; i < T; ++i) {
    int N;

    std::cin >> N;

    if (dp[N] != -1) {
      std::cout << dp[N] << '\n';
      continue;
    }

    for (int j = 4; j <= N; ++j)
      if (dp[j] == -1) dp[j] = dp[j - 1] + dp[j - 2] + dp[j - 3];
    std::cout << dp[N] << '\n';
  }

  return 0;
}
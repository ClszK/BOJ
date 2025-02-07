#include <iostream>
#include <vector>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int n;

  std::cin >> n;
  std::vector<int> dp(n + 1, 0);

  dp[0] = 0;
  dp[1] = 1;
  dp[2] = 2;

  for (int i = 3; i <= n; ++i) dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;

  std::cout << dp[n] << '\n';

  return 0;
}
#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  int N;
  std::cin >> N;

  std::vector<int> stairs(N + 1, 0);

  for (int i = 1; i <= N; ++i) std::cin >> stairs[i];

  std::vector<int> dp(N + 1, 0);

  dp[1] = stairs[1];
  if (N >= 2) dp[2] = stairs[1] + stairs[2];
  if (N >= 3) dp[3] = std::max(stairs[1], stairs[2]) + stairs[3];

  for (int i = 4; i <= N; ++i)
    dp[i] = std::max(dp[i - 2], dp[i - 3] + stairs[i - 1]) + stairs[i];

  std::cout << dp[N] << std::endl;

  return 0;
}

#include <cmath>
#include <iostream>
#include <vector>

int dp[50001];
int min = 4;

int func(int num, int cnt) {
  if (cnt >= min) return -1;
  if (num == 0) {
    if (min > cnt) min = cnt;
    return 1;
  }

  int sqr = static_cast<int>(std::sqrt(num));

  for (int i = sqr; i > 0; --i) {
    if (!dp[i]) dp[i] = i * i;
    if (func(num - dp[i], cnt + 1) < 0) break;
  }
  return 0;
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int n;
  std::cin >> n;

  func(n, 0);

  std::cout << min << '\n';

  return 0;
}
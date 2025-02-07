#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int dp[1000][3];
int rgb[1000][3];

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int N;

  cin >> N;

  for (int i = 0; i < N; ++i) {
    cin >> rgb[i][0];
    cin >> rgb[i][1];
    cin >> rgb[i][2];
  }

  dp[0][0] = rgb[0][0];
  dp[0][1] = rgb[0][1];
  dp[0][2] = rgb[0][2];

  for (int i = 1; i < N; ++i) {
    dp[i][0] = rgb[i][0] + min(dp[i - 1][1], dp[i - 1][2]);
    dp[i][1] = rgb[i][1] + min(dp[i - 1][0], dp[i - 1][2]);
    dp[i][2] = rgb[i][2] + min(dp[i - 1][0], dp[i - 1][1]);
  }

  cout << min({dp[N - 1][0], dp[N - 1][1], dp[N - 1][2]});

  return 0;
}
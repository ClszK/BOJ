#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int N, M;

  cin >> N >> M;

  vector<vector<int>> arr(N + 1, vector<int>(N + 1, 0));

  int tmp;
  for (int i = 1; i <= N; ++i) {
    for (int j = 1; j <= N; ++j) {
      cin >> tmp;

      tmp += arr[i - 1][j] + arr[i][j - 1] - arr[i - 1][j - 1];
      arr[i][j] = tmp;
    }
  }

  int x1, x2, y1, y2;
  int res;
  for (int q = 0; q < M; ++q) {
    cin >> x1 >> y1 >> x2 >> y2;

    res = arr[x2][y2];
    if (x1 > 1) res -= arr[x1 - 1][y2];
    if (y1 > 1) res -= arr[x2][y1 - 1];
    if (x1 > 1 && y1 > 1) res += arr[x1 - 1][y1 - 1];

    cout << res << '\n';
  }

  return 0;
}
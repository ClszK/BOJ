#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int T;

  cin >> T;

  vector<int> prev(3), curr(3);
  for (int i = 0; i < T; ++i) {
    int n;

    cin >> n;
    vector<int> sticker(2 * n);

    for (int& num : sticker) cin >> num;

    prev[0] = 0;
    prev[1] = sticker[0];
    prev[2] = sticker[n];

    for (int j = 1; j < n; ++j) {
      curr[0] = max(prev[1], prev[2]);
      curr[1] = max(prev[0], prev[2]) + sticker[j];
      curr[2] = max(prev[0], prev[1]) + sticker[j + n];
      prev = curr;
    }

    cout << max({prev[0], prev[1], prev[2]}) << '\n';
  }

  return 0;
}
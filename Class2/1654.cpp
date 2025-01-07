#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int N, K;

  cin >> N >> K;
  vector<int> line(N);
  for (int i = 0; i < N; ++i) {
    cin >> line[i];
  }

  unsigned long left = 1, right = *max_element(line.begin(), line.end());
  unsigned long result = 0;

  while (left <= right) {
    unsigned long mid = (left + right) / 2;
    unsigned long cnt = 0;

    for (const int& num : line) cnt += num / mid;

    if (cnt >= K) {
      result = mid;
      left = mid + 1;
    } else
      right = mid - 1;
  }

  cout << result << "\n";

  return 0;
}
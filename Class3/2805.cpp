#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int N, M;
  long long mid = 0;
  long long result = 0;
  cin >> N >> M;

  vector<int> vec(N);

  for (int i = 0; i < N; ++i) cin >> vec[i];
  sort(vec.begin(), vec.end());
  long long left = 0, right = vec.back();

  while (left <= right) {
    long long sum = 0;

    mid = (left + right) / 2;
    sum = 0;

    for (auto it = lower_bound(vec.begin(), vec.end(), mid); it != vec.end();
         ++it)
      sum += *it - mid;

    if (sum >= M) {
      result = mid;
      left = mid + 1;
    } else
      right = mid - 1;
  }

  cout << result << '\n';

  return 0;
}

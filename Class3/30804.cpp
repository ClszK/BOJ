#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int N;
  cin >> N;

  vector<int> bar(N);
  for (int i = 0; i < N; ++i) cin >> bar[i];

  int cnt = 0;
  int l = 0, r = 0;
  unordered_map<int, int> freq;

  while (r < N) {
    freq[bar[r]]++;

    while (freq.size() > 2) {
      freq[bar[l]]--;
      if (freq[bar[l]] == 0) freq.erase(bar[l]);
      l++;
    }

    cnt = max(cnt, r - l + 1);
    r++;
  }
  cout << cnt << '\n';

  return 0;
}
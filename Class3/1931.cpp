#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int N, cnt = 0;

  cin >> N;

  vector<pair<int, int> > time_table(N);

  for (int i = 0; i < N; ++i) {
    cin >> time_table[i].second >> time_table[i].first;
  }

  sort(time_table.begin(), time_table.end());

  int val = 0;
  for (auto& it : time_table) {
    if (it.second >= val) {
      ++cnt;
      val = it.first;
    }
  }

  cout << cnt;

  return 0;
}
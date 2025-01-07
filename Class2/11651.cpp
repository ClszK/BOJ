#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N;
  int x, y;
  cin >> N;
  vector<pair<int, int> > xyPair(N);
  for (int i = 0; i < N; ++i) {
    cin >> x >> y;
    xyPair[i] = make_pair(y, x);
  }

  sort(xyPair.begin(), xyPair.end());
  for (const auto& pr : xyPair) {
    cout << pr.second << " " << pr.first << "\n";
  }

  return 0;
}
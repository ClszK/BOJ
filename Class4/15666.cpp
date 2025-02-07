#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int N, M;
vector<int> arr;
vector<int> num;

void backtracking(int cur, int m) {
  if (m == M) {
    for (int i = 0; i < M; ++i) cout << num[i] << (i < M - 1 ? ' ' : '\n');
    return;
  }

  for (int i = cur; i < N; ++i) {
    if (i > 0 && arr[i] == arr[i - 1]) continue;
    num.push_back(arr[i]);
    backtracking(i, m + 1);
    num.pop_back();
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> N >> M;

  arr.resize(N);

  for (int i = 0; i < N; ++i) cin >> arr[i];

  sort(arr.begin(), arr.end());

  backtracking(0, 0);

  return 0;
}
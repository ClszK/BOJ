#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int N, M;
vector<int> seq;
vector<int> comb;
bool visited[8];

void backtracking() {
  if (comb.size() == M) {
    for (int i = 0; i < M; ++i) {
      cout << comb[i] << (i < M - 1 ? ' ' : '\n');
    }
    return;
  }

  for (int i = 0; i < N; ++i) {
    if (visited[i]) continue;
    comb.push_back(seq[i]);
    visited[i] = true;
    backtracking();
    visited[i] = false;
    comb.pop_back();
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> N >> M;

  seq.resize(N);

  for (int i = 0; i < N; ++i) cin >> seq[i];

  sort(seq.begin(), seq.end());

  backtracking();

  return 0;
}
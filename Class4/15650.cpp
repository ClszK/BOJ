#include <iostream>
#include <vector>

using namespace std;

vector<int> comb;

int N, M;

void backtracking(int start) {
  if (comb.size() == M) {
    for (int i = 0; i < M; ++i) {
      cout << comb[i] << (i < M - 1 ? ' ' : '\n');
    }
    return;
  }

  for (int i = start; i <= N; ++i) {
    comb.push_back(i);
    backtracking(i + 1);
    comb.pop_back();
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> N >> M;

  backtracking(1);

  return 0;
}

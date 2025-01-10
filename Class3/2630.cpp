#include <iostream>
#include <vector>

using namespace std;

vector<int> paper;

int blueCnt = 0, whiteCnt = 0;
int N;

void merge(int pos, int side) {
  if (side == 0) return;

  int firstPaper = paper[pos];

  for (int i = pos; i < pos + side; ++i) {
    for (int j = 0; j < side; ++j) {
      if (paper[j * N + i] != firstPaper) {
        side /= 2;

        merge(pos, side);
        merge(pos + side, side);
        merge(pos + side * N, side);
        merge(pos + side * (N + 1), side);
        return;
      }
    }
  }

  firstPaper == 1 ? blueCnt++ : whiteCnt++;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> N;

  paper.resize(N * N, 0);

  for (int i = 0; i < N * N; ++i) cin >> paper[i];

  merge(0, N);

  cout << whiteCnt << '\n' << blueCnt << '\n';

  return 0;
}

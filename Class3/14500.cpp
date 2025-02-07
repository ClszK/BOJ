#include <iostream>
#include <vector>

using namespace std;

// clang-format off
vector<pair<int, int> > tetromino = {
	// I
	{0, 0}, {1, 0}, {2, 0}, {3, 0},
	{0, 0}, {0, 1}, {0, 2}, {0, 3},
	// ㅁ
	{0, 0}, {0, 1}, {1, 0}, {1, 1},
	// L
	{0, 0}, {0, 1}, {0, 2}, {1, 2},
	{0, 0}, {1, 0}, {2, 0}, {2, -1},
	{0, 0}, {0, 1}, {0, 2}, {-1, 2},
	{0, 0}, {1, 0}, {2, 0}, {2, 1},
	{0, 0}, {-1, 0}, {-1, 1}, {-1, 2},
	{0, 0}, {0, 1}, {1, 1}, {2, 1},
	{0, 0}, {1, 0}, {1, 1}, {1, 2},
	{0, 0}, {0, -1}, {1, -1}, {2, -1},
	// ㄹ
	{0, 0}, {0, 1}, {1, 1}, {1, 2},
	{0, 0}, {1, 0}, {1, -1}, {2, -1},
	{0, 0}, {0, 1}, {-1, 1}, {-1, 2},
	{0, 0}, {1, 0}, {1, 1}, {2, 1},

	// ㅗ
	{0, 0}, {1, 0}, {1, 1}, {2, 0},
	{0, 0}, {1, 0}, {1, -1}, {2, 0},
	{0, 0}, {0, 1}, {0, 2}, {-1, 1}, 
	{0, 0}, {0, 1}, {0, 2}, {1, 1}, 
	};
// clang-format on

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int N, M;

  cin >> N >> M;

  vector<int> map(N * M);
  for (int i = 0; i < N * M; ++i) cin >> map[i];

  int tetromino_cnt = tetromino.size();
  int sum = 0;
  int max_sum = 0;

  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < M; ++j) {
      for (int k = 0; k < tetromino_cnt; ++k) {
        int dx = j + tetromino[k].first;
        int dy = i + tetromino[k].second;

        if (dx < 0 || dy < 0 || dx >= M || dy >= N) {
          sum = 0;
          k = (k / 4 + 1) * 4 - 1;
          continue;
        }
        sum += map[dy * M + dx];
        if ((k + 1) % 4 == 0) {
          max_sum = max(max_sum, sum);
          sum = 0;
        }
      }
    }
  }
  cout << max_sum;
  return 0;
}
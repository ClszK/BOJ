#include <iostream>
#include <queue>

using namespace std;

int tomato[1001][1001];
int unripe_count;
int M, N;
queue<pair<int, int>> q;
int dir[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

void bfs() {
  int day = 0;

  while (!q.empty() && unripe_count > 0) {
    int q_size = q.size();
    ++day;
    for (int i = 0; i < q_size; ++i) {
      auto [x, y] = q.front();
      q.pop();

      for (int j = 0; j < 4; ++j) {
        int nx = x + dir[j][0];
        int ny = y + dir[j][1];

        if (nx < 0 || ny < 0 || nx >= M || ny >= N || tomato[ny][nx]) continue;

        tomato[ny][nx] = tomato[y][x] + 1;
        q.push({nx, ny});
        --unripe_count;
      }
    }
  }

  if (unripe_count > 0)
    cout << "-1\n";
  else
    cout << day << '\n';
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> M >> N;
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < M; ++j) {
      cin >> tomato[i][j];
      if (tomato[i][j] == 1)
        q.push({j, i});
      else if (tomato[i][j] == 0)
        ++unripe_count;
    }
  }

  bfs();

  return 0;
}
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int n, m;
vector<vector<int> > graph(1001, vector<int>(1001, -1));
int dir[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

void bfs(int start_x, int start_y) {
  queue<pair<int, int> > q;

  q.push({start_x, start_y});
  graph[start_y][start_x] = 0;

  while (!q.empty()) {
    auto [x, y] = q.front();

    q.pop();
    for (int i = 0; i < 4; ++i) {
      int nx = x + dir[i][0];
      int ny = y + dir[i][1];

      if (nx < 0 || ny < 0 || nx >= m || ny >= n || graph[ny][nx] != -1)
        continue;
      q.push({nx, ny});
      graph[ny][nx] = graph[y][x] + 1;
    }
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> m;
  int start_x = 0, start_y = 0;
  int val;

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      cin >> val;
      switch (val) {
        case 2:
          start_x = j;
          start_y = i;
          break;
        case 0:
          graph[i][j] = 0;
          break;
      }
    }
  }

  bfs(start_x, start_y);

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      cout << graph[i][j] << ' ';
    }
    cout << '\n';
  }

  return 0;
}
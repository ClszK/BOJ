#include <iostream>
#include <queue>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

int N, M;
vector<bool> graph;
int dir[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

int bfs(int x, int y) {
  queue<tuple<int, int, int> > q;

  q.push({x, y, 1});
  graph[y * M + x] = false;
  if (y * M + x == N * M - 1) return 0;

  while (!q.empty()) {
    auto [x, y, depth] = q.front();

    q.pop();
    for (int i = 0; i < 4; ++i) {
      int nx = x + dir[i][0];
      int ny = y + dir[i][1];

      int next = ny * M + nx;
      if (next == N * M - 1) return depth + 1;

      if (nx < 0 || nx >= M || ny < 0 || ny >= N || !graph[next]) continue;

      graph[next] = false;
      q.push({nx, ny, depth + 1});
    }
  }
  return 0;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  string str;

  cin >> N >> M;

  graph.resize(N * M);
  for (int i = 0; i < N; ++i) {
    cin >> str;
    for (int j = 0; j < M; ++j)
      graph[i * M + j] = (str[j] == '1' ? true : false);
  }

  cout << bfs(0, 0) << '\n';
  return 0;
}
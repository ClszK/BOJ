#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

int N;
vector<bool> graph;

int dir[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

int bfs(int x, int y) {
  queue<pair<int, int> > q;
  int visited_cnt = 1;

  q.push({x, y});
  graph[y * N + x] = false;

  while (!q.empty()) {
    auto [x, y] = q.front();

    q.pop();
    for (int i = 0; i < 4; ++i) {
      int nx = x + dir[i][0];
      int ny = y + dir[i][1];
      int next = nx + ny * N;

      if (nx < 0 || ny < 0 || nx >= N || ny >= N || !graph[next]) continue;
      graph[next] = false;
      ++visited_cnt;
      q.push({nx, ny});
    }
  }

  return visited_cnt;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> N;

  graph.resize(N * N);
  string str;
  vector<int> apt;
  for (int i = 0; i < N; ++i) {
    cin >> str;
    for (int j = 0; j < N; ++j)
      graph[i * N + j] = (str[j] == '0' ? false : true);
  }

  for (int i = 0; i < N * N; ++i)
    if (graph[i]) apt.push_back(bfs(i % N, i / N));

  sort(apt.begin(), apt.end());
  cout << apt.size() << '\n';

  for (int elem : apt) cout << elem << '\n';

  return 0;
}
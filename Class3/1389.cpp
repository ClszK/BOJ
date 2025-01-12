#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int N, M;

vector<vector<int> > graph;

int bfs(int start) {
  vector<int> visited(N + 1, false);
  queue<pair<int, int> > q;
  int connect = 0;

  q.push({start, 0});

  visited[start] = true;

  while (!q.empty()) {
    auto [node, depth] = q.front();

    q.pop();

    for (int elem : graph[node]) {
      if (!visited[elem]) {
        visited[elem] = true;
        q.push({elem, depth + 1});
        connect += depth + 1;
      }
    }
  }

  return connect;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> N >> M;

  graph.resize(N + 1);

  for (int i = 0; i < M; ++i) {
    int a, b;
    cin >> a >> b;

    graph[a].push_back(b);
    graph[b].push_back(a);
  }

  pair<int, int> min_connect = {5000, -1};

  for (int i = 1; i <= N; ++i) {
    int connect = bfs(i);
    if (connect < min_connect.first) min_connect = {connect, i};
  }

  cout << min_connect.second << '\n';

  return 0;
}
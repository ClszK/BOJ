#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

vector<vector<int> > graph;
vector<bool> visited;

void dfs(int start) {
  stack<int> s;

  s.push(start);
  visited[start] = true;

  while (!s.empty()) {
    int node = s.top();
    s.pop();

    for (int elem : graph[node]) {
      if (!visited[elem]) {
        visited[elem] = true;
        s.push(elem);
      }
    }
  }
}

void bfs(int start) {
  queue<int> q;

  q.push(start);
  visited[start] = true;

  while (!q.empty()) {
    int node = q.front();

    q.pop();

    for (int elem : graph[node]) {
      if (!visited[elem]) {
        visited[elem] = true;
        q.push(elem);
      }
    }
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int N, M;
  int cnt = 0;

  cin >> N >> M;

  graph.resize(N + 1);
  visited.resize(N + 1, false);

  for (int i = 0; i < M; ++i) {
    int u, v;
    cin >> u >> v;

    graph[u].push_back(v);
    graph[v].push_back(u);
  }

  for (int i = 1; i <= N; ++i) {
    if (!visited[i]) {
      cnt++;
      bfs(i);
    }
  }

  cout << cnt << '\n';

  return 0;
}
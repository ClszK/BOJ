#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
#include <vector>

std::vector<std::vector<int> > graph;
std::vector<bool> visited;

void dfs(int start) {
  std::stack<int> s;

  s.push(start);

  while (!s.empty()) {
    int node = s.top();

    s.pop();
    if (!visited[node]) {
      visited[node] = true;

      std::cout << node << " ";

      for (auto it = graph[node].rbegin(); it != graph[node].rend(); ++it)
        if (!visited[*it]) s.push(*it);
    }
  }
}

void bfs(int start) {
  std::queue<int> q;

  q.push(start);
  visited[start] = true;

  while (!q.empty()) {
    int node = q.front();

    q.pop();
    std::cout << node << " ";

    for (int neighbor : graph[node]) {
      if (!visited[neighbor]) {
        q.push(neighbor);
        visited[neighbor] = true;
      }
    }
  }
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int N, M, V;
  int a, b;

  std::cin >> N >> M >> V;

  graph.resize(N + 1);
  visited.resize(N + 1, false);

  for (int i = 0; i < M; ++i) {
    std::cin >> a >> b;

    auto it = std::lower_bound(graph[a].begin(), graph[a].end(), b);
    graph[a].insert(it, b);
    it = std::lower_bound(graph[b].begin(), graph[b].end(), a);
    graph[b].insert(it, a);
  }

  dfs(V);
  std::fill(visited.begin(), visited.end(), false);
  std::cout << "\n";
  bfs(V);

  return 0;
}
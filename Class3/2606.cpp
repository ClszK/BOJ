#include <algorithm>
#include <iostream>
#include <vector>

std::vector<int> adj[101];
bool visited[101];

void dfs(int node) {
  visited[node] = true;

  for (int next : adj[node])
    if (!visited[next]) dfs(next);
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);

  int N, M;
  int a, b;
  int cnt = 0;

  std::cin >> N >> M;

  for (int i = 0; i < M; ++i) {
    std::cin >> a >> b;

    adj[a].push_back(b);
    adj[b].push_back(a);
  }

  dfs(1);

  for (int i = 2; i <= N; ++i)
    if (visited[i]) ++cnt;

  std::cout << cnt << std::endl;

  return 0;
}
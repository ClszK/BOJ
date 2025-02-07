#include <iostream>
#include <queue>
#include <vector>

using namespace std;

vector<vector<int>> adj;
vector<int> parent;

void dfs(int cur, int par) {
  parent[cur] = par;

  for (int next : adj[cur]) {
    if (next != par) {
      dfs(next, cur);
    }
  }
}

void bfs(int root) {
  queue<int> q;

  q.push(root);
  parent[root] = 0;

  while (!q.empty()) {
    int cur = q.front();

    q.pop();
    for (int next : adj[cur]) {
      if (parent[next] == 0) {
        q.push(next);
        parent[next] = cur;
      }
    }
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int N;

  cin >> N;

  adj.resize(N + 1);

  for (int i = 0; i < N - 1; ++i) {
    int u, v;

    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  parent.resize(N + 1, 0);

  bfs(1);

  for (int i = 2; i <= N; ++i) cout << parent[i] << '\n';

  return 0;
}
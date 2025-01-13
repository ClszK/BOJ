#include <iostream>
#include <queue>
#include <utility>
#include <vector>

using namespace std;

int N, K;
bool visited[200001];

int bfs(int start) {
  queue<pair<int, int> > q;

  q.push({start, 0});
  visited[start] = true;
  if (start == K) return 0;

  while (!q.empty()) {
    auto [node, depth] = q.front();

    q.pop();
    int next_pos[3] = {node + 1, node - 1, 2 * node};
    for (int i = 0; i < 3; ++i) {
      int next = next_pos[i];
      if (next == K) return depth + 1;
      if (next >= 0 && next <= 200000 && !visited[next]) {
        visited[next] = true;
        q.push({next, depth + 1});
      }
    }
  }

  return 0;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> N >> K;

  cout << bfs(N) << '\n';

  return 0;
}
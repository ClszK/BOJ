#include <algorithm>
#include <iostream>
#include <vector>

int cnt;
int M, N, K;

std::vector<int> map;

void dfs(int x, int y) {
  int idx = y * M + x;
  if (x < 0 || x >= M || y < 0 || y >= N || map[idx] == 0) return;

  map[idx] = 0;
  dfs(x + 1, y);
  dfs(x - 1, y);
  dfs(x, y + 1);
  dfs(x, y - 1);
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int T;

  std::cin >> T;

  for (int i = 0; i < T; ++i) {
    std::cin >> M >> N >> K;

    map.resize(M * N, 0);

    int x, y;
    cnt = 0;
    for (int j = 0; j < K; ++j) {
      std::cin >> x >> y;

      map[y * M + x] = 1;
    }

    while (1) {
      int idx =
          std::distance(map.begin(), std::find(map.begin(), map.end(), 1));
      if (idx == map.size()) {
        std::cout << cnt << '\n';
        break;
      }
      x = idx % M;
      y = idx / M;
      dfs(x, y);
      cnt++;
    }
  }

  return 0;
}
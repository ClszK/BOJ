#include <algorithm>
#include <iostream>
#include <stack>
#include <utility>
#include <vector>

using namespace std;

int N, M;
int meet_cnt = 0;
vector<char> map;
int dir[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

void dfs(int x, int y) {
  int pos = y * M + x;
  if (x >= M || x < 0 || y >= N || y < 0 || map[pos] == 'X') return;

  if (map[pos] == 'P') ++meet_cnt;
  map[pos] = 'X';

  dfs(x, y + 1);
  dfs(x, y - 1);
  dfs(x + 1, y);
  dfs(x - 1, y);
}

void dfs_1(int x, int y) {
  stack<pair<int, int> > s;

  s.push({x, y});

  while (!s.empty()) {
    auto [x, y] = s.top();

    s.pop();
    int pos = y * M + x;

    if (map[pos] == 'P') ++meet_cnt;
    map[pos] = 'X';

    for (int i = 0; i < 4; ++i) {
      int nx = x + dir[i][0];
      int ny = y + dir[i][1];
      if (nx >= M || nx < 0 || ny >= N || ny < 0 || map[ny * M + nx] == 'X')
        continue;
      s.push({nx, ny});
    }
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int i_pos;

  cin >> N >> M;

  map.resize(N * M);

  for (int i = 0; i < N * M; ++i) cin >> map[i];

  i_pos = find(map.begin(), map.end(), 'I') - map.begin();

  dfs_1(i_pos % M, i_pos / M);

  !meet_cnt ? cout << "TT" : cout << meet_cnt;
  cout << '\n';

  return 0;
}
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int M, N, H;
int unripeCount = 0;
// vector<vector<vector<int>>> tomato;
int tomato[101][101][101];

const int dir[6][3] = {{0, 0, 1},  {0, 0, -1}, {0, 1, 0},
                       {0, -1, 0}, {1, 0, 0},  {-1, 0, 0}};

struct Coordinate {
  int x, y, z;
};

queue<Coordinate> q;

void bfs() {
  int day = 0;
  while (!q.empty() && unripeCount > 0) {
    int q_size = q.size();
    ++day;

    for (int i = 0; i < q_size; ++i) {
      Coordinate xyz = q.front();
      q.pop();

      int x = xyz.x;
      int y = xyz.y;
      int z = xyz.z;

      for (int i = 0; i < 6; ++i) {
        int nx = x + dir[i][0];
        int ny = y + dir[i][1];
        int nz = z + dir[i][2];

        if (nx < 0 || ny < 0 || nz < 0 || nx >= M || ny >= N || nz >= H ||
            tomato[nz][ny][nx])
          continue;
        tomato[nz][ny][nx] = 1;
        q.push({nx, ny, nz});
        --unripeCount;
      }
    }
  }

  if (unripeCount > 0)
    cout << "-1\n";
  else
    cout << day << '\n';
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> M >> N >> H;

  // tomato =
  //     vector<vector<vector<int>>>(H, vector<vector<int>>(N, vector<int>(M)));

  for (int i = 0; i < H; ++i) {
    for (int j = 0; j < N; ++j) {
      for (int k = 0; k < M; ++k) {
        cin >> tomato[i][j][k];
        if (tomato[i][j][k] == 1)
          q.push({k, j, i});
        else if (tomato[i][j][k] == 0)
          ++unripeCount;
      }
    }
  }

  bfs();

  return 0;
}
#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int N;

  cin >> N;

  bool dist[N][N];

  for (int i = 0; i < N; ++i)
    for (int j = 0; j < N; ++j) cin >> dist[i][j];

  for (int v = 0; v < N; ++v) {
    for (int i = 0; i < N; ++i) {
      for (int j = 0; j < N; ++j) {
        if (dist[i][v] && dist[v][j]) dist[i][j] = 1;
      }
    }
  }

  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < N; ++j) cout << dist[i][j] << ' ';
    cout << '\n';
  }

  return 0;
}
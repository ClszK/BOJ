#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int N, r, c;
int val = 0;

void recursion(int x, int y, int size) {
  if (size == 2) {
    for (int i = y; i < 2 + y; ++i) {
      for (int j = x; j < 2 + x; ++j) {
        if (j == c && i == r) {
          cout << val << '\n';
          return;
        }
        ++val;
      }
    }
    return;
  }

  int half = size / 2;
  int area = half * half;

  for (int i = 0; i < 4; ++i) {
    int nx = x + (i % 2) * half;
    int ny = y + (i / 2) * half;

    if (r >= ny && r < ny + half & c >= nx && c < nx + half) {
      recursion(nx, ny, half);
      return;
    } else
      val += area;
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> N >> r >> c;

  recursion(0, 0, pow(2, N));

  return 0;
}
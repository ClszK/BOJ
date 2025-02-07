#include <iostream>

using namespace std;

int num[501 * 250];

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;

  cin >> n;
  int max_size = n * (n + 1) / 2;

  for (int i = 0; i < max_size; ++i) {
    cin >> num[i];
  }

  for (int row = n - 2; row >= 0; --row) {
    int start = row * (row + 1) / 2;
    int next_start = (row + 1) * (row + 2) / 2;
    for (int j = 0; j <= row; ++j) {
      num[start + j] += max(num[next_start + j], num[next_start + j + 1]);
    }
  }

  cout << num[0];

  return 0;
}
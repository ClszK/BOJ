#include <iostream>

using namespace std;

int main() {
  int N;

  cin >> N;

  for (int i = 1; i < 2 * N; ++i) {
    int range = (N - i < 0 ? 2 * N - i : i);

    for (int j = 1; j <= 2 * N; ++j) {
      if (j <= range || j > 2 * N - range)
        cout << '*';
      else
        cout << ' ';
    }
    cout << '\n';
  }
  return 0;
}
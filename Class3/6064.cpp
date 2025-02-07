#include <iostream>
#include <numeric>

using namespace std;

int M, N, x, y;

int func() {
  int lcm = M / gcd(M, N) * N;
  int start = x;

  while (start <= lcm) {
    if (start % N == y % N) return start;
    start += M;
  }
  return -1;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int a;

  cin >> a;

  for (int i = 0; i < a; ++i) {
    cin >> M >> N >> x >> y;

    cout << func() << '\n';
  }

  return 0;
}

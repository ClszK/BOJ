#include <iostream>
#include <queue>

using namespace std;

int A, B;

long mulByTwo(long x) { return x * 2; }

long addOne(long x) { return x * 10 + 1; }

void bfs() {
  queue<pair<long, int>> q;
  long (*funcCalc[2])(long) = {mulByTwo, addOne};

  q.push({A, 0});

  if (A == B) {
    cout << "1\n";
    return;
  }

  while (!q.empty()) {
    auto [val, cnt] = q.front();

    q.pop();
    for (int i = 0; i < 2; ++i) {
      long next = funcCalc[i](val);

      if (next > B)
        continue;
      if (next == B) {
        cout << cnt + 2 << '\n';
        return;
      }
      q.push({next, cnt + 1});
    }
  }

  cout << "-1\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> A >> B;

  bfs();

  return 0;
}

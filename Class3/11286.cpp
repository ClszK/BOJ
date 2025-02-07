#include <iostream>
#include <queue>
#include <vector>

using namespace std;

struct Compare {
  bool operator()(const int& a, const int& b) const {
    int abs_a = abs(a), abs_b = abs(b);
    if (abs_a == abs_b) return a > b;
    return abs_a > abs_b;
  }
};

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int N;

  cin >> N;

  priority_queue<int, vector<int>, Compare> q;

  for (int i = 0; i < N; ++i) {
    int num;

    cin >> num;

    if (num == 0) {
      if (q.empty()) {
        cout << "0\n";
      } else {
        cout << q.top() << '\n';
        q.pop();
      }
    } else
      q.push(num);
  }

  return 0;
}
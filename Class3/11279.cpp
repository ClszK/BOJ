#include <iostream>
#include <queue>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int N;
  cin >> N;

  priority_queue<int> heap;
  for (int i = 0; i < N; ++i) {
    int num;

    cin >> num;
    if (num == 0) {
      if (heap.empty()) {
        cout << "0\n";
        continue;
      }
      cout << heap.top() << '\n';
      heap.pop();
    } else
      heap.push(num);
  }
  return 0;
}
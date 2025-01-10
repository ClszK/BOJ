#include <iostream>
#include <queue>

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  std::cout.tie(0);

  int N;
  std::priority_queue<int, std::vector<int>, std::greater<int> > minHeap;
  std::cin >> N;

  int num;
  for (int i = 0; i < N; ++i) {
    std::cin >> num;

    if (num == 0) {
      if (minHeap.empty())
        std::cout << 0 << '\n';
      else {
        std::cout << minHeap.top() << '\n';
        minHeap.pop();
      }
    } else
      minHeap.push(num);
  }

  return 0;
}
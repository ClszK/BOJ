#include <deque>
#include <iostream>
#include <stack>

int main() {
  int N;
  std::cin >> N;

  std::deque<int> deq(N);
  for (int i = 0; i < N; ++i) deq[i] = i + 1;

  int num;
  while (deq.size() != 1) {
    deq.pop_front();
    num = deq.front();
    deq.pop_front();
    deq.push_back(num);
  }

  std::cout << deq.front() << std::endl;

  return 0;
}
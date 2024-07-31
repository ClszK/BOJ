#include <deque>
#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int K, num;
  std::cin >> K;
  std::deque<int> accounting;
  for (int i = 0; i < K; ++i) {
    std::cin >> num;
    if (num == 0)
      accounting.pop_back();
    else
      accounting.push_back(num);
  }

  int sum = 0;
  for (int n : accounting) {
    sum += n;
  }
  std::cout << sum << std::endl;

  return 0;
}
#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::iostream::sync_with_stdio(false);
  std::cin.tie(NULL);

  int N;
  std::cin >> N;
  std::vector<int> vec(N);
  for (int i = 0; i < N; ++i) {
    std::cin >> vec[i];
  }

  std::sort(vec.begin(), vec.end());
  for (const int& element : vec) std::cout << element << '\n';

  return 0;
}
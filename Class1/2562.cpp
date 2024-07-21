#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::vector<int> vec;
  int N;

  for (int i = 0; i < 9; ++i) {
    if (!(std::cin >> N) || N < 1 || N > 100) return 1;
    vec.push_back(N);
  }

  std::vector<int>::iterator it =
      std::max_element(vec.begin(), vec.end());

  std::cout << *it << std::endl;
  std::cout << it - vec.begin() + 1 << std::endl;

  return 0;
}
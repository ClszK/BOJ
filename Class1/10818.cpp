#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int N, num;
  if (!(std::cin >> N) || N < 1 || N > 1000000) return 1;
  std::vector<int> vec(N);

  for (int i = 0; i < N; ++i) {
    if (!(std::cin >> num) || num < -1000000 || N > 1000000)
      return 1;
    vec[i] = num;
  }
  std::vector<int>::iterator itMin =
      std::min_element(vec.begin(), vec.end());
  std::vector<int>::iterator itMax =
      std::max_element(vec.begin(), vec.end());
  std::cout << *itMin << " " << *itMax << std::endl;
  return 0;
}
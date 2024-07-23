#include <cmath>
#include <iostream>
#include <vector>

int main() {
  int N;
  int num;
  int cnt = 0;
  std::vector<int> vec;
  if (!(std::cin >> N) || N > 100) return 1;
  for (int i = 0; i < N; ++i) {
    if (!(std::cin >> num) || num > 1000) return 1;
    vec.push_back(num);
  }

  for (std::vector<int>::iterator it = vec.begin();
       it != vec.end(); ++it) {
    if (*it == 1) continue;
    for (int i = 2; i <= std::sqrt(*it); ++i) {
      if (*it % i == 0) {
        --cnt;
        break;
      }
    }
    ++cnt;
  }

  std::cout << cnt << std::endl;

  return 0;
}
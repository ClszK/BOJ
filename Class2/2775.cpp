#include <iostream>
#include <vector>

int cal(int k, int n) {
  std::vector<int> vec;
  for (int i = 1; i <= n; ++i) vec.push_back(i);
  for (int i = 0; i < k; ++i)
    for (int j = 1; j < n; ++j) {
      vec[j] += vec[j - 1];
    }
  return vec.back();
}

int main() {
  int T, k, n;
  std::cin >> T;
  for (int i = 0; i < T; ++i) {
    std::cin >> k >> n;
    std::cout << cal(k, n) << std::endl;
  }
  return 0;
}

#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  int N, M;
  int num;
  int result = 0;
  int max = 0;
  int sum;
  std::vector<int> vec;

  std::cin >> N >> M;
  for (int i = 0; i < N; ++i) {
    std::cin >> num;
    vec.push_back(num);
  }
  std::sort(vec.begin(), vec.end());
  for (int i = N - 1; i >= 0; --i) {
    if (vec[i] >= M) continue;
    for (int j = i - 1; j >= 0; --j) {
      for (int k = i - 2; k >= 0; --k) {
        sum = vec[i] + vec[j] + vec[k];
        if (j != k && sum <= M && sum > max) max = sum;
      }
    }
  }
  std::cout << max << std::endl;

  return 0;
}
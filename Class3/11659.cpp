#include <iostream>
#include <vector>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int N, M, i, j;

  std::cin >> N >> M;
  std::vector<int> num(N + 1, 0);

  for (i = 1; i <= N; ++i) {
    std::cin >> num[i];
    num[i] += num[i - 1];
  }

  for (; M > 0; --M) {
    std::cin >> i >> j;

    std::cout << num[j] - num[i - 1] << '\n';
  }

  return 0;
}

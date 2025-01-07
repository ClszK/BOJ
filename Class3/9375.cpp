#include <algorithm>
#include <iostream>
#include <map>

int main() {
  int N, M;
  std::map<std::string, int> map;

  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  std::cin >> N;

  for (int i = 0; i < N; ++i) {
    int result = 1;

    std::cin >> M;
    for (int j = 0; j < M; ++j) {
      std::string a, b;

      std::cin >> a >> b;
      map[b]++;
    }

    for (auto elem : map) result *= elem.second + 1;

    std::cout << result - 1 << '\n';

    map.clear();
  }

  return 0;
}
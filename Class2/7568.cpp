#include <iostream>
#include <utility>
#include <vector>

int main() {
  int N;
  int x, y;
  int cnt;

  std::cin >> N;
  std::vector<std::pair<int, int> > weightVec(N);
  for (int i = 0; i < N; ++i) {
    std::cin >> x >> y;
    weightVec[i] = std::make_pair(x, y);
  }

  for (int i = 0; i < N; ++i) {
    cnt = 1;
    for (int j = 0; j < N; ++j) {
      if (weightVec[i].first < weightVec[j].first &&
          weightVec[i].second < weightVec[j].second)
        ++cnt;
    }
    std::cout << cnt << " ";
  }
  std::cout << std::endl;

  return 0;
}
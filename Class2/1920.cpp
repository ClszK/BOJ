#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  int N, M;

  std::cin >> N;
  std::vector<int> aVec(N);
  for (int i = 0; i < N; ++i) std::cin >> aVec[i];

  std::cin >> M;
  std::vector<int> bVec(M);
  for (int i = 0; i < M; ++i) std::cin >> bVec[i];

  std::sort(aVec.begin(), aVec.end());
  std::vector<int>::iterator aItBegin = aVec.begin();
  std::vector<int>::iterator aItEnd = aVec.end();
  for (int num : bVec) {
    if (std::binary_search(aItBegin, aItEnd, num) == false)
      std::cout << "0\n";
    else
      std::cout << "1\n";
  }
  return 0;
}
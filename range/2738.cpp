#include <cmath>
#include <iostream>
#include <vector>

int main() {
  int N, M;
  int elem;
  std::cin >> N >> M;
  if (std::abs(N) > 100 || std::abs(M) > 100) return 1;

  std::vector<std::vector<int> > array1(N, std::vector<int>(M));
  std::vector<std::vector<int> > array2(N, std::vector<int>(M));
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < M; ++j) {
      std::cin >> elem;
      if (std::abs(elem) > 100) return 1;

      array1[i][j] = elem;
    }
  }

  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < M; ++j) {
      std::cin >> elem;
      if (std::abs(elem) > 100) return 1;

      array2[i][j] = elem;
    }
  }

  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < M; ++j) {
      std::cout << array1[i][j] + array2[i][j] << " ";
    }
    std::cout << std::endl;
  }

  return 0;
}
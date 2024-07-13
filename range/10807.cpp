#include <cmath>
#include <iostream>

int main() {
  int N, v, cnt = 0;
  int arr[100];

  std::cin >> N;
  if (N < 1 || N > 100) return 1;
  for (int i = 0; i < N; ++i) {
    std::cin >> arr[i];
    if (std::abs(arr[i]) > 100) {
      return 1;
    }
  }
  std::cin >> v;
  if (std::abs(v) > 100) {
    return 1;
  }

  for (int i = 0; i < N; ++i) {
    if (arr[i] == v) cnt++;
  }

  std::cout << cnt << std::endl;
  return 0;
}
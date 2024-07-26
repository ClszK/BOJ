#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(0);

  int N;
  int num;
  int arr[10000] = {
      0,
  };

  std::cin >> N;
  for (int i = 0; i < N; ++i) {
    std::cin >> num;
    ++arr[num - 1];
  }
  for (int i = 0; i < 10000; ++i) {
    if (arr[i] > 0) {
      for (int j = 0; j < arr[i]; ++j) std::cout << i + 1 << '\n';
    }
  }
  return 0;
}
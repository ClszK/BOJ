#include <iostream>

int main() {
  int arr[42] = {0};
  int cnt = 0;
  int num;
  for (int i = 0; i < 10; ++i) {
    if (!(std::cin >> num) || num < 0 || num > 1000) return 1;
    ++arr[num % 42];
  }
  for (int i = 0; i < 42; ++i)
    if (arr[i] > 0) ++cnt;
  std::cout << cnt << std::endl;
  return 0;
}
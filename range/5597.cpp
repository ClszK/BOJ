#include <iostream>

int main() {
  int n;
  bool arr[30] = {0};
  for (int i = 0; i < 28; ++i) {
    std::cin >> n;
    if (n < 1 || n > 30) return 1;
    arr[n] = true;
  }

  for (int i = 0; i < 30; ++i) {
    if (arr[i] == false) std::cout << i << std::endl;
  }
  return 0;
}
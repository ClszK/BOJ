#include <iostream>

int main() {
  long arr[5];

  for (int i = 0; i < 5; ++i) {
    if (!(std::cin >> arr[i]) || arr[i] < 0 || arr[i] > 100)
      return 1;
  }
  std::cout << arr[0] * arr[1] - (arr[2] * arr[3] * arr[4])
            << std::endl;
  return 0;
}
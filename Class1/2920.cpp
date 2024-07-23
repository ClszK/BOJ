#include <iostream>

int main() {
  int arr[8];
  for (int i = 0; i < 8; ++i)
    if (!(std::cin >> arr[i]) || arr[i] < 1 || arr[i] > 8)
      return 1;

  int sign = arr[0] - arr[1];
  for (int i = 1; i < 7; ++i) {
    if (sign != arr[i] - arr[i + 1]) {
      std::cout << "mixed" << std::endl;
      return 0;
    }
  }
  if (sign > 0)
    std::cout << "descending" << std::endl;
  else
    std::cout << "ascending" << std::endl;
  return 0;
}
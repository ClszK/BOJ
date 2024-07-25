#include <iostream>

int main() {
  int arr[4], arr2[4];
  int sum1 = 0, sum2 = 0;
  for (int i = 0; i < 4; ++i) std::cin >> arr[i];
  for (int i = 0; i < 4; ++i) std::cin >> arr2[i];
  for (int i = 0; i < 4; ++i) sum1 += arr[i];
  for (int i = 0; i < 4; ++i) sum2 += arr2[i];
  std::cout << (sum1 >= sum2 ? sum1 : sum2) << std::endl;
  return 0;
}
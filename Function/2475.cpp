#include <iostream>

int modCal(int* arr) {
  int mod = 0;
  for (int i = 0; i < 5; ++i) {
    mod = (mod + arr[i] * arr[i]) % 10;
  }
  return mod;
}

int main() {
  int arr[5];
  for (int i = 0; i < 5; ++i) {
    if (!(std::cin >> arr[i])) return 1;
  }
  std::cout << modCal(arr) << std::endl;

  return 0;
}
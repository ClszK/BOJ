#include <iostream>
<<<<<<< HEAD

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
=======
#include <vector>

int main() {
  std::vector<int> vec;
  int num;
  for (int i = 0; i < 8; ++i) {
    if (!(std::cin >> num) || num < 1 || num > 8) return 1;
    vec.push_back(num);
  }

int temp = vec[0];


>>>>>>> 94dc9165d5bc55be9afb8bba4ae6e9d22826b292
  return 0;
}
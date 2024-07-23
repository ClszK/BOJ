#include <iostream>
#include <vector>

int main() {
  std::vector<int> vec;
  int num;
  for (int i = 0; i < 8; ++i) {
    if (!(std::cin >> num) || num < 1 || num > 8) return 1;
    vec.push_back(num);
  }

int temp = vec[0];


  return 0;
}
#include <iostream>

int main() {
  int A, B, C;
  int left, right;
  while (std::cin >> A >> B >> C) {
    if (A < -1 || A >= 100 || B < -1 || B >= 100 || C < -1 || C >= 100)
      return 1;
    left = C - (B + 1);
    right = (B - 1) - A;
    std::cout << (left > right ? left : right) << std::endl;
  }
  return 0;
}
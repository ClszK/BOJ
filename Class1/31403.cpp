#include <iostream>

int main() {
  int A, B, C;

  if (!(std::cin >> A) || A < 1 || A > 1000) return 1;
  if (!(std::cin >> B) || B < 1 || B > 1000) return 1;
  if (!(std::cin >> C) || C < 1 || C > 1000) return 1;

  std::string str = std::to_string(A) + std::to_string(B);

  std::cout << A + B - C << std::endl;
  std::cout << std::atoi(str.c_str()) - C << std::endl;
  return 0;
}
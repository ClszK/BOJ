#include <iostream>

int main() {
  std::string str = "WelcomeToSMUPC";
  int N;
  if (!(std::cin >> N) || N < 1 || N > 1000000) return 1;

  std::cout << str[(N - 1) % str.size()] << std::endl;
  return 0;
}

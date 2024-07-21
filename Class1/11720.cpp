#include <iostream>

int main() {
  int N;
  std::string str;
  long sum = 0;

  if (!(std::cin >> N) || N < 1 || N > 100) return 1;
  std::cin >> str;
  while (str.size()) {
    sum += std::atoi(&(str.back()));
    str.pop_back();
  }
  std::cout << sum << std::endl;

  return 0;
}
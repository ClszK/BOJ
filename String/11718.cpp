#include <iostream>

int main() {
  std::string str;
  int cnt = 0;
  while (std::getline(std::cin, str) || cnt < 100) {
    if (str.front() == ' ' || str.back() == ' ') return 1;
    for (int i = 0; i < str.size(); ++i) {
      if (!(std::isalnum(str[i]) || str[i] == ' ')) return 1;
    }
    std::cout << str << std::endl;
    cnt++;
  }
  std::cout << str << std::endl;
  return 0;
}
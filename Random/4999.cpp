#include <iostream>

bool validateStr(const std::string& str) {
  if (str.size() > 1000 || str.back() != 'h') return false;
  for (int i = 0; i < str.size() - 1; ++i)
    if (str[i] != 'a') return false;
  return true;
}

int main() {
  std::string str;
  std::string str2;

  if (!(std::cin >> str) || !(std::cin >> str2) ||
      !validateStr(str) || !validateStr(str2))
    return 1;
  if (str.size() < str2.size())
    std::cout << "no";
  else
    std::cout << "go";
  std::cout << std::endl;
  return 0;
}
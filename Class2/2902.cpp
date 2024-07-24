#include <iostream>
#include <sstream>

int main() {
  std::string str;

  std::cin >> str;

  std::istringstream iss(str);
  while (std::getline(iss, str, '-')) {
    std::cout << str[0];
  }
  std::cout << std::endl;
  return 0;
}
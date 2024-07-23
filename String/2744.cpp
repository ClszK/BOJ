#include <iostream>

int main() {
  std::string str;

  std::cin >> str;
  if (str.size() > 100) return 1;
  for (int i = 0; i < str.size(); ++i) {
    if (!std::isalpha(str[i])) return 1;
  }

  for (int i = 0; i < str.size(); ++i) {
    if (std::islower(str[i]))
      std::cout << static_cast<char>(std::toupper(str[i]));
    else
      std::cout << static_cast<char>(std::tolower(str[i]));
  }
  std::cout << std::endl;

  return 0;
}
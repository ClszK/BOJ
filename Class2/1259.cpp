#include <iostream>

int main() {
  std::string str;

  while (true) {
    std::cin >> str;

    if (str == "0") return 0;

    if (str.size() == 1) {
      std::cout << "yes" << std::endl;
      continue;
    }

    int pivot = str.size() / 2;
    for (int i = 0; i < pivot; ++i) {
      if (str[i] != str[str.size() - i - 1]) {
        std::cout << "no" << std::endl;
        break;
      }
      if (i == pivot - 1) std::cout << "yes" << std::endl;
    }
  }
  return 0;
}
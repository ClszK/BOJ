#include <iostream>

int main() {
  int T;
  std::string str;

  std::cin >> T;

  if (T < 1 || T > 10) return 1;

  for (int i = 0; i < T; i++) {
    std::cin >> str;
    if (str.size() > 1000) return 1;
    for (char c : str) {
      if (!std::isupper(c)) return 1;
    }
    std::cout << str.front() << str.back() << std::endl;
  }

  return 0;
}
#include <iostream>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  std::string str;
  std::cin >> str;

  size_t pos = 0;
  bool flag = false;
  int result = 0;
  int tmp = 0;

  while (pos < str.size()) {
    size_t nextPos;

    int num = std::stoi(str.substr(pos), &nextPos);

    pos += nextPos;

    if (num < 0) {
      num *= -1;
      if (!flag) {
        flag = true;
      } else {
        result -= tmp;
        tmp = 0;
      }
    }

    if (flag)
      tmp += num;
    else
      result += num;
  }

  if (tmp) result -= tmp;
  std::cout << result;

  return 0;
}
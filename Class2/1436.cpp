#include <iostream>

int main() {
  int N;
  int start = 666;
  int cnt = 0;
  std::cin >> N;

  while (true) {
    if (std::to_string(start).find("666") != std::string::npos) {
      ++cnt;
    }
    if (cnt == N) {
      std::cout << start << std::endl;
      return 0;
    }
    ++start;
  }

  return 0;
}
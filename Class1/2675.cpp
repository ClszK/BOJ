#include <iostream>

int main() {
  int T, R;
  std::string str;

  if (!(std::cin >> T) || T < 1 || T > 1000) return 1;
  for (int i = 0; i < T; ++i) {
    if (!(std::cin >> R >> str) || R < 1 || R > 8 ||
        str.size() == 0 || str.size() > 20)
      return 1;

    std::string result = "";
    for (std::string::iterator it = str.begin(); it != str.end();
         ++it) {
      for (int j = 0; j < R; ++j) result += *it;
    }
    std::cout << result << std::endl;
  }
  return 0;
}
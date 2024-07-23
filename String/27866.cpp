#include <iostream>

int main() {
  std::string S;
  int i;

  std::cin >> S;
  if (S.size() > 1000) return 1;
  for (int i = 0; i < S.size(); ++i) {
    if (!std::isalpha(S[i])) return 1;
  }
  std::cin >> i;
  if (i > S.size() || i < 1) return 1;

  std::cout << S[i - 1] << std::endl;

  return 0;
}
#include <iostream>

int main() {
  int N;
  std::string str;
  int scoreSum = 0;
  int score = 0;
  if (!(std::cin >> N)) return 1;

  for (int i = 0; i < N; ++i) {
    if (!(std::cin >> str) || str.size() == 0 || str.size() > 79)
      return 1;
    for (int j = 0; j < str.size(); ++j) {
      if (str[j] == 'O')
        ++score;
      else
        score = 0;
      scoreSum += score;
    }
    std::cout << scoreSum << std::endl;
    scoreSum = 0;
    score = 0;
  }

  return 0;
}
#include <iostream>

int main() {
  int N;
  int cntRoom = 1;
  int j = 1;
  if (!(std::cin >> N) || N > 1000000000) return 1;
  for (int i = 1; i < N; i += 6 * j++) ++cntRoom;
  std::cout << cntRoom << std::endl;

  return 0;
}
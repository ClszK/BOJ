#include <iostream>

int main() {
  int H, M;
  int calTime = 0;

  if (!(std::cin >> H) || H < 0 || H > 23) return 1;
  if (!(std::cin >> M) || H < 0 || H > 59) return 1;

  calTime = H * 60 + M - 45;
  calTime = (calTime < 0 ? 24 * 60 + calTime : calTime);
  std::cout << calTime / 60 << " " << calTime % 60;

  return 0;
}
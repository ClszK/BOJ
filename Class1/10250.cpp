#include <iostream>

bool numValid(int limit, int& num) {
  if (!(std::cin >> num) || num < 1 || num > limit) return false;
  return true;
}

int main() {
  int T;
  int N, H, W;
  int roomNum = 0;

  if (!(std::cin >> T)) return 1;

  for (int i = 0; i < T; ++i) {
    if (!numValid(100, H) || !numValid(100, W) ||
        !numValid(H * W, N))
      return 1;
    if (N % H == 0)
      roomNum = H * 100 + N / H;
    else
      roomNum = N % H * 100 + N / H + 1;
    std::cout << roomNum << std::endl;
  }
  return 0;
}
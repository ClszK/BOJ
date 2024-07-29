#include <cmath>
#include <iostream>
#include <vector>

long factorial(long N) {
  if (N == 1) return 1;
  return N * factorial(N - 1);
}

int main() {
  int N, tmp;
  int num;
  int twoCnt = 0;
  int fiveCnt = 0;

  std::cin >> N;
  tmp = N;
  while (N) {
    num = N;
    while (num) {
      if (num % 2 == 0) {
        ++twoCnt;
        num /= 2;
      } else if (num % 5 == 0) {
        ++fiveCnt;
        num /= 5;
      } else
        break;
    }
    --N;
  }

  std::cout << std::min(twoCnt, fiveCnt) << std::endl;
  std::cout << factorial(tmp) << std::endl;

  return 0;
}

// 6 * 5 * 4 * 3 * 2 * 1;
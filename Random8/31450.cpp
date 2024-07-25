#include <iostream>

int main() {
  long M, K;
  if (!(std::cin >> M >> K) || M < 1 || M > 1000000000 || K < 1 ||
      K > 1000000000)
    return 1;
  std::cout << (M % K == 0 ? "Yes" : "No") << std::endl;
  return 0;
}
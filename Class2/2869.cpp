#include <iostream>
#include <sstream>

int digitCnt(int n) {
  if (n / 10 == 0) return 1;
  return 10 * digitCnt(n / 10);
}

int main() {
  int A, B, V;
  std::cin >> A >> B >> V;

  std::cout << (V - A) / (A - B) + (V - A) % (A - B) +
                   ((V - A) % (A - B) == 0 ? 1 : 0);

  return 0;
}

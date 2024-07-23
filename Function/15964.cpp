#include <iostream>

long ABFunc(long A, long B) {
  long cal;

  cal = A * A - B * B;
  return cal;
}

int main() {
  long A, B;
  std::cin >> A >> B;

  if (A < 1 || A > 100000 || B < 1 || B > 100000) return 1;
  std::cout << ABFunc(A, B) << std::endl;

  return 0;
}
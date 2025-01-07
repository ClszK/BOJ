#include <iostream>

int main() {
  long A, B, V;
  long result;
  std::cin >> A >> B >> V;

  if (V <= A) {
    std::cout << 1 << std::endl;
    return 0;
  }

  result = (V - A) / (A - B);
  if ((V - A) % (A - B)) {
    result += ((V - A) % (A - B) + A) / A;
    result += (((V - A) % (A - B) + A) % A ? 1 : 0);
  } else
    result += 1;

  std::cout << result << std::endl;

  return 0;
}

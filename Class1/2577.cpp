#include <iostream>
#include <map>

bool validate(int& num) {
  if (!(std::cin >> num) || num < 100 || num > 1000)
    return false;
  return true;
}

int main() {
  int A, B, C;
  std::map<int, int> cntNum;

  unsigned long mulCal = 0;
  if (!validate(A) || !validate(B) || !validate(C)) return 1;
  mulCal = A * B * C;
  while (mulCal != 0) {
    cntNum[mulCal % 10]++;
    mulCal /= 10;
  }
  for (int i = 0; i < 10; ++i) {
    std::cout << cntNum[i] << std::endl;
  }

  return 0;
}

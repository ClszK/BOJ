#include <cmath>
#include <iostream>
#include <vector>

long hash(int L, std::vector<long> vec) {
  long hashVal = 0;
  long r = 1;
  for (int i = 0; i < L; ++i) {
    hashVal = (vec[i] * r + hashVal) % 1234567891;
    r = r * 31 % 1234567891;
  }
  return hashVal;
}

int main() {
  int L;
  std::string str;
  std::vector<long> vec;

  std::cin >> L >> str;
  for (int i = 0; i < L; ++i) vec.push_back(str[i] - 'a' + 1);
  std::cout << hash(L, vec) << std::endl;

  return 0;
}
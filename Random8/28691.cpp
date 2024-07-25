#include <iostream>
#include <map>

int main() {
  char c;
  std::map<char, std::string> charMap;

  charMap['M'] = "MatKor";
  charMap['W'] = "WiCys";
  charMap['C'] = "CyKor";
  charMap['A'] = "AlKor";
  charMap['$'] = "$clear";
  std::cin >> c;
  std::cout << charMap[c] << std::endl;

  return 0;
}
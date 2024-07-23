#include <fstream>
#include <iostream>

int main() {
  long num;
  std::string str;

  if (!(std::cin >> str)) return 1;
  try {
    num = std::stol(str);
  } catch (const std::exception& e) {
    return 1;
  }
  if (str.find('7') == std::string::npos) {
    if (num % 7 != 0)
      std::cout << '0';
    else
      std::cout << '1';
  } else {
    if (num % 7 != 0)
      std::cout << '2';
    else
      std::cout << '3';
  }
  return 0;
}
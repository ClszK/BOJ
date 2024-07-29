#include <iostream>
#include <sstream>

int main() {
  std::string str;
  long pos;
  long num, temp = 0;

  for (int i = 0; i < 3; ++i) {
    std::cin >> str;
    std::istringstream iss(str);
    if (iss >> temp) {
      num = temp;
      pos = i;
    }
  }

  int i = num + 3 - pos;
  if (i % 3 == 0) {
    std::cout << (i % 5 == 0 ? "FizzBuzz" : "Fizz") << std::endl;
  } else {
    std::cout << (i % 5 == 0 ? "Buzz" : std::to_string(i)) << std::endl;
  }
  return 0;
}
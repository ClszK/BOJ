#include <iomanip>
#include <iostream>

int main() {
  std::string str;
  double grade = 0;

  std::cin >> str;
  if (str == "F") {
    std::cout << "0.0" << std::endl;
    return 0;
  }
  if (str.size() != 2) return 1;

  if (str[0] == 'A')
    grade = 4.0;
  else if (str[0] == 'B')
    grade = 3.0;
  else if (str[0] == 'C')
    grade = 2.0;
  else if (str[0] == 'D')
    grade = 1.0;

  if (str[1] == '+')
    grade += 0.3;
  else if (str[1] == '0')
    grade += 0.0;
  else if (str[1] == '-')
    grade -= 0.3;

  std::cout << std::fixed << std::setprecision(1) << grade
            << std::endl;
  return 0;
}
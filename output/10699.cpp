#include <ctime>
#include <iostream>

int main() {
  std::time_t now = std::time(0);
  std::tm* ltm = std::gmtime(&now);

  std::cout << 1900 + ltm->tm_year << "-";
  std::cout.width(2);
  std::cout.fill('0');
  std::cout << 1 + ltm->tm_mon << "-";
  if (1 + ltm->tm_mon < 10) std::cout << "0";
  std::cout << ltm->tm_mday << std::endl;
  return 0;
}

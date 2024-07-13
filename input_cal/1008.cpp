#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>

int main() {
  double a = 0.0;
  double b = 0.0;

  std::cin >> a >> b;

  if ((std::fabs(a) > 10 && a == 0) ||
      (std::fabs(b) > 10 && b == 0))
    return 1;
  std::cout << std::setprecision(
                   std::numeric_limits<double>::digits10)
            << a / b << std::endl;

  return 0;
}
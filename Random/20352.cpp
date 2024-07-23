#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
  double pi = M_PI;
  unsigned long area;
  double radius;

  if (!(std::cin >> area)) return 1;

  radius = std::sqrt(area / pi);
  std::cout << std::fixed << std::setprecision(10)
            << radius * 2 * pi << std::endl;
  return 0;
}
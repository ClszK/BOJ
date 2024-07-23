#include <iostream>

int main() {
  int N;
  if (!(std::cin >> N) || N < 380 || N > 780) return 1;
  if (N >= 620)
    std::cout << "Red";
  else if (N >= 590)
    std::cout << "Orange";
  else if (N >= 570)
    std::cout << "Yellow";
  else if (N >= 495)
    std::cout << "Green";
  else if (N >= 450)
    std::cout << "Blue";
  else if (N >= 425)
    std::cout << "Indigo";
  else if (N >= 380)
    std::cout << "Violet";

  std::cout << std::endl;
  return 0;
}
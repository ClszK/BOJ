#include <iostream>

int totalCal(int shirt, int T) {
  return shirt / T + (shirt % T == 0 ? 0 : 1);
}

int main() {
  int N;
  int S, M, L, XL, XXL, XXXL;
  int T, P;
  int totalShirt = 0;
  if (!(std::cin >> N >> S >> M >> L >> XL >> XXL >> XXXL >> T >>
        P))
    return 1;
  totalShirt = totalCal(S, T) + totalCal(M, T) + totalCal(L, T) +
               totalCal(XL, T) + totalCal(XXL, T) +
               totalCal(XXXL, T);

  std::cout << totalShirt << std::endl;
  std::cout << N / P << " " << N % P << std::endl;
  return 0;
}
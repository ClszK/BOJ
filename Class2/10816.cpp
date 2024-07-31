#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int N, M;
  std::cin >> N;
  std::vector<int> cardArr(N);
  for (int i = 0; i < N; ++i) std::cin >> cardArr[i];

  std::cin >> M;
  std::vector<int> findCard(M);
  for (int i = 0; i < M; ++i) std::cin >> findCard[i];

  std::sort(cardArr.begin(), cardArr.end());
  std::vector<int>::iterator itBegin = cardArr.begin();
  std::vector<int>::iterator itEnd = cardArr.end();
  for (int num : findCard)
    std::cout << std::upper_bound(itBegin, itEnd, num) -
                     std::lower_bound(itBegin, itEnd, num)
              << " ";

  std::cout << std::endl;

  return 0;
}

// #include <algorithm>
// #include <iostream>
// #include <unordered_map>
// #include <vector>

// int main() {
//   std::ios_base::sync_with_stdio(false);
//   std::cin.tie(NULL);

//   int N, M;
//   int num;
//   std::cin >> N;
//   std::unordered_map<int, int> cardPair;

//   for (int i = 0; i < N; ++i) {
//     std::cin >> num;
//     ++cardPair[num];++cardPair[num];
//   }

//   std::cin >> M;
//   for (int i = 0; i < M; ++i) {
//     std::cin >> num;
//     std::cout << cardPair[num] << " ";
//   }

//   return 0;
// }
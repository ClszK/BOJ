#include <iostream>
#include <list>
#include <vector>

int main() {
  int N, K;
  std::cin >> N >> K;
  std::list<int> lst;

  std::vector<int> answer;
  for (int i = 1; i <= N; ++i) lst.push_back(i);

  std::list<int>::iterator it = lst.begin();
  while (lst.size() > 1) {
    if (std::distance(it, lst.end()) > K - 1)
      std::advance(it, K - 1);
    else {
      int itDistance = std::distance(it, lst.end());
      it = lst.begin();
      std::advance(it, (K - itDistance - 1) % lst.size());
    }
    answer.push_back(*it);
    lst.erase(it++);
  }

  std::cout << "<";
  for (const auto& elem : answer) {
    std::cout << elem << ", ";
  }
  std::cout << lst.back() << ">" << "\n";

  return 0;
}
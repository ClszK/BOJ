#include <algorithm>
#include <iostream>
// #include <map>
#include <unordered_map>

int main() {
  int N, M;
  std::string addr, pass;
  std::unordered_map<std::string, std::string> dic;

  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  std::cin >> N >> M;

  for (int i = 0; i < N; ++i) {
    std::cin >> addr >> pass;
    dic[addr] = pass;
  }

  for (int i = 0; i < M; ++i) {
    std::cin >> addr;
    std::cout << dic[addr] << '\n';
  }

  return 0;
}
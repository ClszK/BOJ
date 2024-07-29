#include <algorithm>
#include <iostream>
#include <map>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int N;
  int age;
  std::string name;
  std::cin >> N;
  std::multimap<int, std::string> ageName;

  for (int i = 0; i < N; ++i) {
    std::cin >> age >> name;
    ageName.insert(std::make_pair(age, name));
  }

  for (const std::pair<int, std::string>& element : ageName) {
    std::cout << element.first << " " << element.second << "\n";
  }

  return 0;
}
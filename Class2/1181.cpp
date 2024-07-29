#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

void strPrint(const std::string& str) { std::cout << str << std::endl; }

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int N;
  std::string str;
  std::map<int, std::vector<std::string> > map;
  std::map<int, std::vector<std::string> >::iterator it;

  std::cin >> N;
  for (int i = 0; i < N; ++i) {
    std::cin >> str;
    it = map.find(str.size());
    if (it != map.end()) {
      it->second.push_back(str);
    } else {
      std::vector<std::string> vec;
      vec.push_back(str);
      map[str.size()] = vec;
    }
  }

  for (it = map.begin(); it != map.end(); ++it) {
    std::sort(it->second.begin(), it->second.end());
    std::for_each(it->second.begin(),
                  std::unique(it->second.begin(), it->second.end()), strPrint);
  }
  return 0;
}
#include <iostream>
#include <map>

int main() {
  int N;
  std::string name;
  std::map<char, int> nameMap;
  char firstChar;
  bool checkPrint = false;

  if (!(std::cin >> N) || N < 1 || N > 150) return 1;
  for (int i = 0; i < N; ++i) {
    if (!(std::cin >> name) || name.size() > 30) return 1;
    firstChar = name[0];
    if (nameMap.find(firstChar) == nameMap.end())
      nameMap[firstChar] = 1;
    else
      ++nameMap[firstChar];
  }

  for (std::map<char, int>::iterator it = nameMap.begin();
       it != nameMap.end(); ++it) {
    if (it->second >= 5) {
      std::cout << it->first;
      checkPrint = true;
    }
  }
  if (!checkPrint) std::cout << "PREDAJA";
  std::cout << std::endl;

  return 0;
}
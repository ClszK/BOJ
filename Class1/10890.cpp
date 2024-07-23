#include <algorithm>
#include <iostream>

int main() {
  std::string str;
  int arr[26];
  std::fill(arr, arr + 26, -1);

  if (!(std::cin >> str) || str.size() > 100) return 1;
  for (int i = 0; i < str.size(); ++i) {
    if (arr[static_cast<int>(str[i] - 'a')] == -1)
      arr[static_cast<int>(str[i] - 'a')] = i;
  }

  for (int i = 0; i < 26; ++i) std::cout << arr[i] << " ";
  std::cout << std::endl;

  return 0;
}
#include <algorithm>
#include <iostream>
#include <map>
#include <stack>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  bool success;
  std::string str;
  std::map<char, char> bracket;

  bracket.insert(std::make_pair(')', '('));
  bracket.insert(std::make_pair(']', '['));

  while (std::getline(std::cin, str) && str != ".") {
    std::stack<char> stk;

    success = true;
    for (char ch : str) {
      if (ch == '(' || ch == '[')
        stk.push(ch);
      else if (ch == ')' || ch == ']') {
        if (stk.empty()) {
          success = false;
          break;
        }
        if (bracket[ch] != stk.top()) {
          success = false;
          break;
        }
        stk.pop();
      }
    }
    if (!stk.empty() || !success)
      std::cout << "no\n";
    else
      std::cout << "yes\n";
  }
  return 0;
}
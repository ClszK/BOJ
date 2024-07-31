#include <iostream>
#include <stack>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  int T;
  std::cin >> T;
  std::string str;

  for (int i = 0; i < T; ++i) {
    std::cin >> str;
    std::stack<int> stk;
    bool success;

    for (char ch : str) {
      success = true;
      if (ch == '(')
        stk.push(ch);
      else if (ch == ')') {
        if (stk.empty() || stk.top() != '(') {
          success = false;
          break;
        }
        stk.pop();
      }
    }
    if (!stk.empty() || !success)
      std::cout << "NO\n";
    else
      std::cout << "YES\n";
  }

  return 0;
}
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, temp;
  int num = 1;

  cin >> n;
  stack<int> stk;
  vector<bool> op;

  for (int i = 0; i < n; ++i) {
    cin >> temp;
    while (num <= temp) {
      op.push_back(true);
      stk.push(num++);
    }
    while (true) {
      if (stk.empty()) {
        cout << "NO\n";
        return 0;
      }
      int topElem = stk.top();

      op.push_back(false);
      stk.pop();
      if (topElem == temp) break;
    }
  }

  for (bool elem : op) cout << (elem == true ? "+\n" : "-\n");

  return 0;
}

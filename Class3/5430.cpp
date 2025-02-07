#include <deque>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int T;

  cin >> T;

  string func;
  string arr_str;
  string str;
  int size;

  deque<int> arr;

  while (T--) {
    cin >> func;
    cin >> size;
    cin >> arr_str;

    arr_str[0] = '0';
    arr.resize(size);
    stringstream ss(arr_str);

    for (int i = 0; i < size; ++i) {
      getline(ss, str, ',');
      arr[i] = stoi(str);
    }

    bool is_reverse = false;
    bool err = false;
    for (int i = 0; i < func.size(); ++i) {
      if (func[i] == 'R')
        is_reverse = !is_reverse;
      else {
        if (arr.empty()) {
          cout << "error\n";
          err = true;
          break;
        }
        if (is_reverse)
          arr.pop_back();
        else
          arr.pop_front();
      }
    }

    if (err) {
      arr.clear();
      continue;
    }
    cout << '[';
    if (!arr.empty()) {
      if (is_reverse) {
        for (auto it = arr.rbegin(); it != arr.rend() - 1; ++it)
          cout << *it << ',';
        cout << *(arr.rend() - 1);
      } else {
        for (auto it = arr.begin(); it != arr.end() - 1; ++it)
          cout << *it << ',';
        cout << *(arr.end() - 1);
      }
    }
    cout << "]\n";
    arr.clear();
  }

  return 0;
}
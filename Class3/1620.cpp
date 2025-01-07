#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int N, M;
  int num;
  string line;

  cin >> N >> M;
  unordered_map<string, int> bookName;
  vector<string> bookNum(N);
  for (int i = 0; i < N; ++i) {
    cin >> bookNum[i];
    bookName.insert(make_pair(bookNum[i], i + 1));
  }

  for (int i = 0; i < M; ++i) {
    cin >> line;
    if (all_of(line.begin(), line.end(), ::isdigit)) {
      cout << bookNum[stol(line) - 1] << "\n";
    } else
      cout << bookName[line] << "\n";
  }

  return 0;
}
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  map<string, int> dic;
  vector<string> names;

  string name;
  int N, M;

  cin >> N >> M;
  for (int i = 0; i < N; ++i) {
    cin >> name;
    dic[name]++;
  }
  for (int i = 0; i < M; ++i) {
    cin >> name;
    dic[name]++;
  }

  int cnt = 0;
  for (pair<string, int> elem : dic) {
    if (elem.second == 2) {
      ++cnt;
      names.push_back(elem.first);
    }
  }

  cout << cnt << "\n";

  for (vector<string>::iterator it = names.begin(); it != names.end(); ++it) {
    cout << *it << "\n";
  }

  return 0;
}
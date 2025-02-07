#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  size_t N, M;
  string str;

  cin >> N;
  cin >> M;
  cin >> str;

  int cnt = 0;
  int i_cnt = 0;

  for (int i = 2; i < M; ++i) {
    if (str[i] == 'I') {
      if (str[i - 1] == 'O' && str[i - 2] == 'I') {
        if (++i_cnt == N) {
          ++cnt;
          --i_cnt;
        }
      } else
        i_cnt = 0;
    }
  }

  cout << cnt << '\n';

  return 0;
}
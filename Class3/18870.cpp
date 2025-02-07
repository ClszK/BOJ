#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  cin.tie(0);
  cout.tie(0);
  ios::sync_with_stdio(0);

  int N;

  cin >> N;

  vector<int> vec(N);

  for (int i = 0; i < N; ++i) cin >> vec[i];

  vector<int> sorted_vec = vec;

  sort(sorted_vec.begin(), sorted_vec.end());

  sorted_vec.erase(unique(sorted_vec.begin(), sorted_vec.end()),
                   sorted_vec.end());

  for (int i = 0; i < N; ++i) {
    cout << lower_bound(sorted_vec.begin(), sorted_vec.end(), vec[i]) -
                sorted_vec.begin()
         << ' ';
  }

  return 0;
}
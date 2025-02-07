#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int N;

  cin >> N;

  vector<int> A(N);
  vector<int> lst;

  for (auto &num : A) cin >> num;

  lst.push_back(A[0]);

  for (int i = 1; i < N; ++i) {
    if (A[i] > lst.back())
      lst.push_back(A[i]);
    else {
      auto it = lower_bound(lst.begin(), lst.end(), A[i]);
      *it = A[i];
    }
  }

  cout << lst.size();

  return 0;
}
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

  for (auto& num : A) cin >> num;

  vector<int> dp = A;

  for (int i = 1; i < N; ++i) {
    for (int j = 0; j < i; ++j) {
      if (A[j] < A[i]) {
        dp[i] = max(dp[i], dp[j] + A[i]);
      }
    }
  }

  cout << *max_element(dp.begin(), dp.end());

  return 0;
}
#include <algorithm>
#include <cmath>
#include <iostream>
#include <numeric>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  long long A, B;

  cin >> A >> B;

  long long min_val = min(A, B);
  long long max_val = max(A, B);

  cout << (max_val == min_val ? 0 : max_val - min_val - 1) << '\n';
  for (long long i = min_val + 1; i < max_val; ++i) cout << i << ' ';

  cout << '\n';
  return 0;
}
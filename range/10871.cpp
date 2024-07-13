#include <iostream>

using namespace std;

int main() {
  int N, X;
  int arr[10000];

  cin >> N >> X;
  if (N < 1 || N > 10000 || X < 1 || X > 10000) return 1;
  for (int i = 0; i < N; ++i) cin >> arr[i];

  for (int i = 0; i < N; ++i) {
    if (arr[i] < X) cout << arr[i] << " ";
  }
  return 0;
}
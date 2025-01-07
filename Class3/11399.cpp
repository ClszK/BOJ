#include <algorithm>
#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int N = 0;
  unsigned long sum = 0;
  int prev = 0;
  std::cin >> N;
  int arr[N];

  for (int i = 0; i < N; ++i) std::cin >> arr[i];

  std::sort(arr, arr + N);

  for (int i = 0; i < N; ++i) {
    arr[i] += prev;
    sum += arr[i];
    prev = arr[i];
  }

  std::cout << sum << std::endl;

  return 0;
}

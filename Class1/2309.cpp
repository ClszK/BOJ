#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main() {
  vector<int> arr(9);
  int sum;

  for (int i = 0; i < 9; ++i) cin >> arr[i];

  sum = accumulate(arr.begin(), arr.end(), 0);
  sort(arr.begin(), arr.end());
  for (int i = 0; i < 9; ++i) {
    for (int j = i + 1; j < 9; ++j) {
      if (sum - arr[i] - arr[j] == 100) {
        for (int elem : arr) {
          if (elem != arr[i] && elem != arr[j]) {
            cout << elem << '\n';
          }
        }
        return 0;
      }
    }
  }
  return 0;
}
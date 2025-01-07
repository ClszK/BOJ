#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int N;
  int sum = 0;
  cin >> N;

  vector<int> nums(N);
  map<int, int> frequency;
  for (int i = 0; i < N; ++i) {
    cin >> nums[i];
    sum += nums[i];
    frequency[nums[i]]++;
  }

  double average = round(static_cast<double>(sum) / N);
  if (average == -0.0) average = 0.0;
  cout << average << "\n";
  sort(nums.begin(), nums.end());
  cout << nums[N / 2] << "\n";
  vector<pair<int, int>> freqVec(frequency.begin(), frequency.end());
  sort(freqVec.begin(), freqVec.end(),
       [](const pair<int, int>& a, const pair<int, int>& b) {
         if (a.second == b.second) return a.first < b.first;
         return a.second > b.second;
       });

  if (freqVec.size() > 1 && freqVec[0].second == freqVec[1].second)
    cout << freqVec[1].first << "\n";
  else
    cout << freqVec[0].first << "\n";
  cout << nums.back() - nums.front() << "\n";
  return 0;
}
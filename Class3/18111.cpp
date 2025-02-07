#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int N, M, B;
  cin >> N >> M >> B;

  vector<int> ground(N * M);
  int min_height, max_height;

  for (int i = 0; i < N * M; ++i) cin >> ground[i];

  min_height = *min_element(ground.begin(), ground.end());
  max_height = *max_element(ground.begin(), ground.end());

  int min_time = 2147483647, best_height = 0;

  for (int target = min_height; target <= max_height; ++target) {
    int time = 0, inventory = B;

    for (int height : ground) {
      if (height > target) {
        time += 2 * (height - target);
        inventory += (height - target);
      } else if (height < target) {
        time += (target - height);
        inventory -= (target - height);
      }
    }

    if (inventory >= 0 && time <= min_time) {
      min_time = time;
      best_height = target;
    }
  }

  cout << min_time << " " << best_height << '\n';
  return 0;
}

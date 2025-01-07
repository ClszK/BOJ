#include <algorithm>
#include <deque>
#include <iostream>

using namespace std;

typedef deque<pair<int, int>>::iterator queueIt;

bool findPriority(queueIt beginIt, queueIt endIt, int priority) {
  for (queueIt it = beginIt; it != endIt; ++it) {
    if (it->first > priority) return true;
  }
  return false;
}

int main() {
  int testCase;
  int N, M;
  int num;
  cin >> testCase;

  for (; testCase > 0; --testCase) {
    cin >> N >> M;
    deque<pair<int, int>> priority;
    for (int i = 0; i < N; ++i) {
      cin >> num;
      priority.push_back(make_pair(num, i));
    }

    pair<int, int> temp;
    int order = 1;
    while (true) {
      queueIt it = priority.begin();
      if (findPriority(it, priority.end(), it->first)) {
        temp = *it;
        priority.pop_front();
        priority.push_back(temp);
      } else {
        if (it->second == M) {
          cout << order << "\n";
          break;
        }
        priority.pop_front();
        ++order;
      }
    }
  }
  return 0;
}
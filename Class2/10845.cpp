#include <deque>
#include <iostream>
#include <map>

using namespace std;

void pushQueue(deque<int>& queue, int num) { queue.push_back(num); }

void popQueue(deque<int>& queue) {
  int num = -1;
  if (!queue.empty()) {
    num = queue.front();
    queue.pop_front();
  }
  cout << num << "\n";
}

void sizeQueue(deque<int>& queue) { cout << queue.size() << "\n"; }

void emptyQueue(deque<int>& queue) { cout << queue.empty() << "\n"; }

void frontQueue(deque<int>& queue) {
  int num = -1;
  if (!queue.empty()) num = queue.front();
  cout << num << "\n";
}

void backQueue(deque<int>& queue) {
  int num = -1;
  if (!queue.empty()) num = queue.back();
  cout << num << "\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int N;
  cin >> N;
  map<string, void (*)(deque<int>&)> cmdPair;
  deque<int> queue;

  cmdPair.insert(make_pair("pop", popQueue));
  cmdPair.insert(make_pair("size", sizeQueue));
  cmdPair.insert(make_pair("empty", emptyQueue));
  cmdPair.insert(make_pair("front", frontQueue));
  cmdPair.insert(make_pair("back", backQueue));

  string cmd;
  int num;
  for (int i = 0; i < N; ++i) {
    cin >> cmd;
    if (cmd == "push") {
      cin >> num;
      pushQueue(queue, num);
    } else
      cmdPair[cmd](queue);
  }

  return 0;
}
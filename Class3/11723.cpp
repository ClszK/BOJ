#include <iostream>
#include <map>

using namespace std;

void addSet(int& bit, int value) { bit = bit | (1 << (value - 1)); }

void removeSet(int& bit, int value) { bit = bit & ~(1 << (value - 1)); }

void checkSet(int& bit, int value) {
  if (bit & (1 << (value - 1)))
    cout << "1\n";
  else
    cout << "0\n";
}

void toggleSet(int& bit, int value) { bit = bit ^ (1 << (value - 1)); }

void allSet(int& bit, int value) { bit = (1 << 20) - 1; }
void emptySet(int& bit, int value) { bit = 0; }

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int M, value, bit = 0;
  string cmd;
  cin >> M;

  map<string, void (*)(int&, int)> cmdMap;
  cmdMap["add"] = addSet;
  cmdMap["remove"] = removeSet;
  cmdMap["check"] = checkSet;
  cmdMap["toggle"] = toggleSet;
  cmdMap["all"] = allSet;
  cmdMap["empty"] = emptySet;

  for (int i = 0; i < M; ++i) {
    cin >> cmd;
    // if (cmd == "empty" || cmd == "all")
    //   cmdMap[cmd](bit, 0);
    // else {
    //   cin >> value;
    //   cmdMap[cmd](bit, value);
    // }
    if (cmd[1] == 'd') {
      cin >> value;
      addSet(bit, value);
    } else if (cmd[0] == 'r') {
      cin >> value;
      removeSet(bit, value);
    } else if (cmd[0] == 'c') {
      cin >> value;
      checkSet(bit, value);
    } else if (cmd[0] == 't') {
      cin >> value;
      toggleSet(bit, value);
    } else if (cmd[1] == 'l') {
      allSet(bit, 0);
    } else
      emptySet(bit, 0);
  }

  return 0;
}

/*
    add x: S에 x를 추가한다. (1 ≤ x ≤ 20) S에 x가 이미 있는 경우에는 연산을
   무시한다.
   remove x: S에서 x를 제거한다. (1 ≤ x ≤ 20) S에 x가 없는 경우에는
   연산을 무시한다.
   check x: S에 x가 있으면 1을, 없으면 0을 출력한다. (1 ≤ x ≤ 20)
   toggle x: S에 x가 있으면 x를 제거하고, 없으면 x를 추가한다. (1 ≤ x ≤ 20)
   all: S를 {1, 2, ..., 20} 으로 바꾼다.
   empty: S를 공집합으로 바꾼다.
*/
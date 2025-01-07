#include <deque>
#include <iostream>
#include <unordered_map>

void pushStack(std::deque<int>& stack, int n) { stack.push_front(n); }

void popStack(std::deque<int>& stack) {
  int num = -1;

  if (!stack.empty()) {
    num = stack.front();
    stack.pop_front();
  }

  std::cout << num << "\n";
}

void sizeStack(std::deque<int>& stack) { std::cout << stack.size() << "\n"; }

void emptyStack(std::deque<int>& stack) { std::cout << stack.empty() << "\n"; }

void topStack(std::deque<int>& stack) {
  int num = -1;

  if (!stack.empty()) num = stack.front();

  std::cout << num << "\n";
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  int N, num;
  std::deque<int> stack;
  std::string cmd;
  std::unordered_map<std::string, void (*)(std::deque<int>&)> cmdPair;

  cmdPair.insert(std::make_pair("pop", popStack));
  cmdPair.insert(std::make_pair("size", sizeStack));
  cmdPair.insert(std::make_pair("empty", emptyStack));
  cmdPair.insert(std::make_pair("top", topStack));
  std::cin >> N;

  for (int i = 0; i < N; ++i) {
    std::cin >> cmd;
    if (cmd == "push") {
      std::cin >> num;
      pushStack(stack, num);
    } else
      cmdPair[cmd](stack);
  }

  return 0;
}
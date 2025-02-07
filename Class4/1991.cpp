#include <iostream>
#include <vector>

using namespace std;

vector<pair<int, int>> tree(26);

void preorder(int root) {
  if (root < 0) return;

  cout << static_cast<char>(root + 'A');
  preorder(tree[root].first);
  preorder(tree[root].second);
}

void inorder(int root) {
  if (root < 0) return;

  inorder(tree[root].first);
  cout << static_cast<char>(root + 'A');
  inorder(tree[root].second);
}

void postorder(int root) {
  if (root < 0) return;

  postorder(tree[root].first);
  postorder(tree[root].second);
  cout << static_cast<char>(root + 'A');
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int N;

  cin >> N;

  for (int i = 0; i < N; ++i) {
    char a, b, c;

    cin >> a >> b >> c;
    tree[a - 'A'] = {b - 'A', c - 'A'};
  }

  preorder(0);
  cout << '\n';
  inorder(0);
  cout << '\n';
  postorder(0);
  cout << '\n';

  return 0;
}
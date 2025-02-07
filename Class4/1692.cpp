#include <iostream>

using namespace std;

int A, B, C;

long long pow(long long b) {
  if (b == 0)
    return 1;
  if (b == 1)
    return A % C;

  long long answer = pow(b / 2);

  answer = answer * answer % C;
  if (b % 2 == 1)
    return answer * A % C;
  return answer;
}

int main() {
  unsigned long long num;

  cin >> A >> B >> C;

  cout << pow(B);

  return 0;
}

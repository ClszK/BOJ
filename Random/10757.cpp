#include <deque>
#include <iostream>
#include <vector>

void bigNumAdd(std::string A, std::string B) {
  std::string::reverse_iterator itA, itB;
  std::deque<int> add;

  int numA, numB, carry, sum;

  itA = A.rbegin();
  itB = B.rbegin();

  carry = 0;
  while (itA != A.rend() && itB != B.rend()) {
    numA = *itA - '0';
    numB = *itB - '0';

    sum = numA + numB + carry;
    carry = sum / 10;
    add.push_front(sum % 10);
    ++itA;
    ++itB;
  }

  while (itA != A.rend()) {
    sum = *itA - '0' + carry;
    carry = sum / 10;
    add.push_front(sum % 10);
    ++itA;
  }

  while (itB != B.rend()) {
    sum = *itB - '0' + carry;
    carry = sum / 10;
    add.push_front(sum % 10);
    ++itB;
  }

  if (carry) add.push_front(carry);

  for (int num : add) {
    std::cout << num;
  }
  std::cout << std::endl;
}

int main() {
  std::string A, B;

  if (!(std::cin >> A >> B) || A == "0" || B == "0" ||
      A.size() > 10000 || B.size() > 10000)
    return 1;

  for (std::string::iterator it = A.begin(); it != A.end();
       ++it) {
    if (!std::isdigit(*it)) return 1;
  }

  for (std::string::iterator it = B.begin(); it != B.end();
       ++it) {
    if (!std::isdigit(*it)) return 1;
  }

  bigNumAdd(A, B);
  return 0;
}
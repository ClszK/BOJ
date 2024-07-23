#include <iostream>
#include <sstream>
#include <vector>

int main() {
  std::string str;
  std::getline(std::cin, str);

  std::vector<std::string> tokens;
  std::string token;
  std::istringstream tokenStream(str);
  while (std::getline(tokenStream, token, ' ')) {
    if (token.size() != 0) tokens.push_back(token);
  }
  std::cout << tokens.size() << std::endl;

  return 0;
}
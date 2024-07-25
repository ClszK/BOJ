#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::vector<double> vec;
  int N;
  int num;
  int maxGrade;
  double average = 0;

  std::cin >> N;
  for (int i = 0; i < N; ++i) {
    std::cin >> num;
    vec.push_back(num);
  }

  maxGrade = *(std::max_element(vec.begin(), vec.end()));
  for (std::vector<double>::iterator it = vec.begin(); it != vec.end(); ++it) {
    average += *it / maxGrade * 100;
  }

  std::cout << average / N << std::endl;

  return 0;
}
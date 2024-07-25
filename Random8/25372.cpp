#include <iostream>

int main() {
	int N;
	std::string str;

	if (!(std::cin >> N) || N < 1 || N > 1000) return 1;
	for (int i = 0; i < N; ++i) {
		if (!(std::cin >> str) || str.size() == 0 || str.size() > 20) return 1;
		if (str.size() >= 6 && str.size() <= 9) std::cout << "yes" << std::endl;
		else std::cout << "no" << std::endl;
	}

	return 0;
}
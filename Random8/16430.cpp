#include <iostream>

int main() {
	int A, B;
	if (!(std::cin >> A >> B) || A < 1 || A > 10|| B < 1 || B> 10) return 1;
	std::cout << B - A << " " << B << std::endl;

	return 0;
}
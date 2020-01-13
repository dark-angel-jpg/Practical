#include<iostream>
int main() {
	int  a, b, i, f;
	setlocale(LC_ALL, "Russian");
	std::cout << "Введите число:\n";
	std::cin >> a;
	f = 1;
	if (a == 0) { std::cout << a << "!=1"; }
	else {
		for (i = 2; i <= a; i++) {
			f = f * i;
		}
		std::cout << a << "!=" << f;
	}
	return 0;
}

#include<iostream>
int main() {
	double a, b;
	int j;
	setlocale(LC_ALL, "Russian");
	std::cout << "Введите число, а потом степень, в которую требуется возвести:\n";
	std::cin >> a >> j;
	b = 1; //переменная, которая будет содержать конечный результат возведения в степень
	if (j < 0) {
		if (a == 0) { std::cout << "ERROR"; }
		else {
			for (int p = 0; p < abs(j); p++) {
				b = b * a;
			}
			std::cout << 1.0 / b;
		}
	}
	else{
		if (j == 0) { std::cout << 1; }
		else if (j == 1) {
			std::cout << a;
		}
		else {
			for (int i = 0; i < j; i++) {
				b = b * a;
			}
			std::cout << b;
		}
	}
	return 0;
}

#include<iostream>
#include<math.h>
int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b, c, x, x2, D;
	std::cout << "a=";
	std::cin >> a;
	std::cout << "b=";
	std::cin >> b;
	std::cout << "c=";
	std::cin >> c;
	if (((a == 0) && (b == 0)) || (b == 0)) {
		std::cout << "Уравнение не имеет решений\n";
		return 0;
	}
	if (((b == 0) && (c == 0)) || ((a == 0) && (c == 0))) {
		std::cout << "Уравнение имеет 1 решение: x=0\n ";
		return 0;
	}
	if (a == 0) {
		x = -c / b;
		std::cout << "Уравнение имеет 1 решение: x=" << x << "\n";
		return 0;
	}
	if (c == 0) {
		x = -b / a;
		std::cout << "Уравнение имеет 2 решения: x=0\n и\n x=" << x;
		return 0;
	}
	if ((!(a == 0)) && (!(b == 0)) && (!(c == 0))) {
		D = sqrt(b * b - 4 * a * c);
		if (D >= 0) {
			x = (-b + D) / (2 * a);
			x2 = (-b - D) / (2 * a);
			std::cout << "Уравнение имеет 2 решения: x1=" << x << "\n" << "x2=" << x2 << "\n";
		}
		else
		{
			std::cout << "Уравнение не имеет решений";
		}
	}
	return 0;
}

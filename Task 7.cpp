#include<iostream>
#include<math.h> 
int main()
{
	setlocale(LC_ALL, "Russian");
	short int choice;
	double a, b, c, d, Ax, Ay, Bx, By, Cx, Cy, S, p;
	std::cout << "Если вы используете способ через длины сторон введите: 1\n"<<"А если координатным способом, то: 2\n"<<"Ваш выбор:";
	std::cin >> choice;
	switch (choice) {
	case(1):
	{
		std::cout << "a=";
		std::cin >> a;
		std::cout << "\nb=";
		std::cin >> b;
		std::cout << "\nc=";
		std::cin >> c;
		if (((b + c) > a) || ((a + c) > b) || ((a + b) > c)) {
			std::cout << "Треугогльник с такими данными не существует";
		}
		else {
			p = (a + b + c) / 2;
			S = sqrt(p * (p - a) * (p - b) * (p - c));
			std::cout << "S=" << S;
		}
		break;
	}
	case(2): {
		std::cout << "Введите координаты точки A= ";
		std::cin >> Ax >> Ay;
		std::cout << "Введите координаты точки B= ";
		std::cin >> Bx >> By;
		std::cout << "Введите координаты точки C= ";
		std::cin >> Cx >> Cy;
		a = sqrt(((Bx - Ax) * (Bx - Ax)) - ((By - Ay) * (By - Ay)));
		b = sqrt(((Cx - Bx) * (Cx - Bx)) - ((Cy - By) * (Cy - By)));
		c = sqrt(((Ax - Cx) * (Ax - Cx)) - ((Ay - Cy) * (Ay - Cy)));
		if (((b + c) > a) || ((a + c) > b) || ((a + b) > c)) {
			std::cout << "Треугогльник с такими данными не существует";
		}
		else {
			p = (a + b + c) / 2;
			S = sqrt(p * (p - a) * (p - b) * (p - c));
			std::cout << "S=" << S;
		}
		break;
	}
	default:
		std::cout << "Выбора было 2.";
		break;
	}
	return 0;
}

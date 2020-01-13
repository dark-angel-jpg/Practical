#include<iostream>
#include<math.h>
int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b;
	char x = '?'; 
	std::cout << "Возможные операции(+,-,*,/)\n";
	std::cin >> a >> x >> b;
	switch (x) {
	case'+':
			std::cout << "=" << a + b;
			break;
	case'-':
		std::cout << "=" << a - b;
		break;
	case'*' :
		std::cout << "=" << a * b;
		break;
	case'/' :
		if (b != 0) std::cout << "=" << a / b;
		else std::cout << "Деление на ноль невозможно";
		break;

	default:
		std::cout << "Калькулятор данную операцию не выполняет";
		break;
	}
	return 0;
}

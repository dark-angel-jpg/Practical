#include<iostream>
using namespace std;
int main() {
	{ //1 вариант обмена значений ( без помощи дополнительной переменной)
	double a, b;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "After: \n" << "a=" << a << "\n";
	cout << "b=" << b;
	}
	cout << "\n";
	{ //2 вариант обмена значений ( с помощью дополнительной переменой )
		double a, b, c;
		cout << "a=";
		cin >> a;
		cout << "b=";
		cin >> b;
		c = a;
		a = b;
		b = c;
		cout << "a=" << a;
		cout << "\n b=" << b; 
	}
}

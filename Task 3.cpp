#include<iostream>;
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	{
		cout << "Пара 2 int:\n";
		int a, b;
		cout << "a =";
		cin >> a;
		cout << "b =";
		cin >> b;
		cout << " a+b =" << a + b;
		cout << "\n a-b =" << a - b;
		cout << "\n a*b =" << a * b;
		cout << "\n a/b =" << a / b << "\n";
	}
	{
		cout << "Пара 2 double:\n";
		double a, b;
		cout << "a =";
		cin >> a;
		cout << "b =";
		cin >> b;
		cout << " a+b =" << a + b;
		cout << "\n a-b =" << a - b;
		cout << "\n a*b =" << a * b;
		cout << "\n a/b =" << a / b << "\n";
	}
	{
		cout << "Пара double и int:\n";
		double a;
		int b;
		cout << "a =";
		cin >> a;
		cout << "b =";
		cin >> b;
		cout << " a+b =" << a + b;
		cout << "\n a-b =" << a - b;
		cout << "\n a*b =" << a * b;
		cout << "\n a/b =" << a / b << "\n";
	}
	{
		cout << "Пара int и double:\n";
		int a;
		double b;
		cout << "a =";
		cin >> a;
		cout << "b =";
		cin >> b;
		cout << " a+b =" << a + b;
		cout << "\n a-b =" << a - b;
		cout << "\n a*b=" << a * b;
		cout << "\n a/b=" << a / b; 
	}
}

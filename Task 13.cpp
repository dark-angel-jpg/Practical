#include<iostream>
#include<math.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите число:";
	cin >> n;
	if (n == 0) { cout << "Степень двойки:" << 0; }
	else {
		if (n % 2 == 0) { cout << "Степень двойки:" << log2(n); }
		else {
			int x = log2(n) + 1;
			cout << "Степень двойки :" << x;
		}
	}
	return 0;
}

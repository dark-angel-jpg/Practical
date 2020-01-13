#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int s, l1, r1, l2, r2;
	cin >> s>> l1>> r1>> l2>> r2;
	if ((r1 < l1) || (r2 < l2))
		cout << "Данные введены неверно";
	else if ((s < l1 + l2) || (s > r1+r2)) { //проверяем существования s в диапазонах
		cout << "-1";
		return 0;
	}
	else for (int i = l1; i < r1 + 1; i++) { // идем по первому диапазону
		if (s - i <= r2) { 
			for (int j = l2; j < r2 + 1; ++j) {
				if (s - i == j) {
					cout << "Из 1 диапазона x1=" << i << "\n" << "Из 2 диапазона x2=" << j;
					return 0;
				}
				else continue;
			}
			return 0;
		}
	}
	return 0;
}

#include<iostream>
#include<ctime>
using namespace std;
int main() {
	srand(time(NULL)); //устанавливает стартовое значение - реально на этот момент время
	int m[20];
	for (int i = 0; i < 20; i++) { //заполняем массив случайными числами
		m[i] = rand() % 201 - 100;  //генерирует случайное число
	}
	int max, min;
	max = m[0];
	min = m[0];
	for (int i = 0; i < 20; i++) { //ищем максимальное и минимальное числа в массиве
		if (m[i] < min) min = m[i];
		if (m[i] > max) max = m[i];
	}
	for (int i = 0; i < 20; i++) {//выводим массив на экран
		cout << m[i] << " ";
	}
	cout << "\n" << "min=" << min << "\n" << "max=" << max;
}

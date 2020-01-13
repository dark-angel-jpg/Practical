#include<iostream>
using namespace std;
void printBMI(double BMI) {
	if (BMI < 18.5) cout << "Underweight";
	else if (BMI < 25.0) cout << "Normal weight";
	else if (BMI < 30.0) cout << "Overweight";
	else cout << "Obesity";
}
double BMI(double weight, double height) {
	height = height / 100; // в формуле используется си (то есть метры)
	double BMI = weight / (height * height);
	printBMI(BMI); //вызов функции типа void, который выведет на экран итог
	return 0;
}
int main() {
	setlocale(LC_ALL, "Russian");
	double weight, height;
	cout << "Укажите параметры: вес (в кг) и рост (в см):" << "\n";
	cin >> weight >> height;
	BMI(weight, height); // вызов функции double BMI
}

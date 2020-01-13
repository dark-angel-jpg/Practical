#include<iostream>;
using namespace std;
int main() {
	double x0, v0, t, a, xt, F;
	a = -9.8;
	cout << "x0=";
	cin >> x0;
	cout << "v0=";
	cin >> v0;
	cout << "t=";
	cin >> t;
	xt = x0 + v0 * t + a * t * t / 2;
	cout << "x(t)=" << xt;
}

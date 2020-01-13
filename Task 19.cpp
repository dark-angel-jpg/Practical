#include<iostream>
using namespace std;
int main() {
	int n, mass[10], scht[10]{};
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> mass[i];
	} 
	for (int j = 0; j < 10; ++j) {
		for (int i = 0; i < 15; ++i) {
			if (mass[i] == j) scht[j] +=1;
		}
	}
	for (int k = 0; k < 10; ++k) {
		if(scht[k] !=0 )cout << k << ": " << scht[k] << "\n";
	}
}

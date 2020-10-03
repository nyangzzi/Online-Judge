#include <iostream>
using namespace std;

int main() {

	int n = 0;
	cin >> n;

	long long b[100] = {};

	for (int i = 0; i < n; i++) {
		cin >> b[i];
		b[i] *= (i + 1);
		for (int j = 0; j < i; j++) {
			b[i] -= b[j];
		}
	}

	for (int i = 0; i < n; i++) {
		cout << b[i] << " ";
	}
	
}

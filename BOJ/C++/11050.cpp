#include <iostream>
using namespace std;

int main() {
	
	int n = 0, k = 0;
	cin >> n >> k;

	int a = 1;
	int b = 1;

	for (int i = n; i > n-k; i--) {
		a *= i;
	}
	for (int i = k; i > 0; i--) {
		b *= i;
	}

	cout << a / b << endl;
}

#include <iostream>
using namespace std;

int eucl(int a, int b);

int main() {
	
	int test = 0;
	cin >> test;

	while (test--) {

		int a = 0, b = 0;
		cin >> a >> b;

		int gcd = eucl(a, b);
		cout << (long long)a * b / (long long)gcd << endl;
	}
}

int eucl(int a, int b) {
	int temp = 0;
	while (b) {
		temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}

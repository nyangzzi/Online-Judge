#include <iostream>
using namespace std;

int main() {

	int A, B = 0;
	cin >> A >> B;

	int a1 = (A % 100) % 10;
	int a2 = ((A - a1) % 100) / 10;
	int a3 = (A - a1 - a2 * 10) / 100;

	int a = a1 * 100 + a2 * 10 + a3;

	int b1 = (B % 100) % 10;
	int b2 = ((B - b1) % 100) / 10;
	int b3 = (B - b1 - b2 * 10) / 100;

	int b = b1 * 100 + b2 * 10 + b3;

	if (a > b) {
		cout << a << "\n";
	}
	else {
		cout << b << "\n";
	}
}

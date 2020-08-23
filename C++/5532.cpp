#include <iostream>
using namespace std;

int main() {
	
	int l = 0, a = 0, b = 0, c = 0, d = 0;
	cin >> l >> a >> b >> c >> d;

	int day = 0;
	int day2 = 0;

	if (a % c == 0) {
		day = a / c;
	}
	else {
		day = (a / c) + 1;
	}

	if (b % d == 0) {
		day2 = b / d;
	}
	else {
		day2 = (b / d) + 1;
	}

	if (day > day2) {
		cout << l - day << endl;
	}
	else {
		cout << l - day2 << endl;
	}
	
}

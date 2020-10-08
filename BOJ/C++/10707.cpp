#include <iostream>
using namespace std;

int main() {

	int a = 0, b = 0, c = 0, d = 0, p = 0;
	cin >> a >> b >> c >> d >> p;

	int x = a * p;
	int y = b;

	if (p > c) {
		y += (p - c)*d;
	}

	if (x < y) cout << x << endl;
	else cout << y << endl;
	
}

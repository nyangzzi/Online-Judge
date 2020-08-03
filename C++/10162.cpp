#include <iostream>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int t = 0;
	cin >> t;

	int a = 0, b = 0, c = 0;

	if (t >= 5 * 60) {
		a = t / (5 * 60);
		t %= (5 * 60);
	}

	if (t >= 60) {
		b = t / 60;
		t %= 60;
	}

	if (t >= 10) {
		c = t / 10;
		t %= 10;
	}

	if (t == 0) {
		cout << a << " " << b << " " << c << endl;
	}
	else {
		cout << -1 << endl;
	}
}

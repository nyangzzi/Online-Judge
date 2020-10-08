#include <iostream>
using namespace std;

int main() {

	int t = 0;
	cin >> t;

	while (t--) {
		int c = 0;
		cin >> c;

		if (c >= 25) {
			cout << c / 25 << " ";
			c %= 25;
		} 
		else {
			cout << 0 << " ";
		}

		if (c >= 10) {
			cout << c / 10 << " ";
			c %= 10;
		}
		else {
			cout << 0 << " ";
		}

		if (c >= 5) {
			cout << c / 5 << " ";
			c %= 5;
		}
		else {
			cout << 0 << " ";
		}

		if (c >= 1) {
			cout << c / 1 << " ";
			c %= 1;
		}
		else {
			cout << 0 << " ";
		}

		cout << endl;
	}
}

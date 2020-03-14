#include <iostream>
using namespace std;

int main() {

	int x = 0;
	cin >> x;

	int n = 0;
	if (n == 1) {
		cout << "1/1" << endl;
		return 0;
	}
	while (1) {
		if (x - n > 0) {
			x -= n;
			n++;
		}
		else break;
	}

	if (n % 2 == 0) {
		int s = 1;
		int m = n;

		while (x != 1) {
			s++;
			m--;
			x--;
		}

		cout << s << "/" << m << endl;
	}
	else if (n % 2 == 1) {
		int s = n;
		int m = 1;

		while (x != 1) {
			s--;
			m++;
			x--;
		}

		cout << s << "/" << m << endl;
	}
}

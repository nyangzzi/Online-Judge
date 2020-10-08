#include <iostream>
using namespace std;

int main() {
	while (1) {
		int n = 0;
		cin >> n;

		if (n == 0) break;

		int w = 1;
		while (n != 0) {
			if (n % 10 == 0) w += 5;
			else if (n % 10 == 1) w += 3;
			else w += 4;

			n /= 10;
		}
		cout << w << endl;
	}
}

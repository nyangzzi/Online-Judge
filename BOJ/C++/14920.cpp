#include <iostream>
using namespace std;

int main() {

	int n = 1;
	int c = 0;
	cin >> c;

	while (c != 1) {
		if (c % 2 == 0) {
			c /= 2;
		}
		else {
			c = 3 * c + 1;
		}
		n++;
	}

	cout << n << endl;

}

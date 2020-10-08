#include <iostream>
using namespace std;

int main() {

	int sum = 0;
	int min = 101;

	for (int i = 0; i < 7; i++) {
		int n = 0;
		cin >> n;

		if (n % 2) {
			sum += n;
			if (n < min) {
				min = n;
			}
		}
	}
	if (sum == 0) {
		cout << -1 << endl;
	}
	else {
		cout << sum << "\n" << min << "\n";
	}
}

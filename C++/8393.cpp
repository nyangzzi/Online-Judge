#include <iostream>
using namespace std;

int n = 0;

int main() {
	cin >> n;
	int sum = 0;

	if (1 <= n && n <= 10000) {
		for (int i = 1; i <= n; i++) {
			sum = sum + i;
			}
	}
	cout << sum << endl;
}

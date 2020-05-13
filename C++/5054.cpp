#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int test = 0;	//test case
	cin >> test;

	while (test--) {
		int n = 0;
		cin >> n;

		int x = 0;
		int min = 100;
		int max = -1;
		for (int i = 0; i < n; i++) {
			cin >> x;
			if (x > max) max = x;
			if (x < min) min = x;
		}

		cout << 2 * (max - min) << "\n";
	}
}

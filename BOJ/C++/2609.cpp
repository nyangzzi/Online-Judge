#include <iostream>
using namespace std;

int main() {

	int n = 0, m = 0;
	cin >> n >> m;

	int max = 0, min = 0;
	if (n > m) { max = n; min = m; }
	else { max = m; min = n; }

	for (int i = min; i >= 1; i--) {
		if (max%i == 0 && min % i == 0) {
			cout << i << endl;
			break;
		}
	}

	for (int i = max; i <= max * min; i++) {
		if (i % max == 0 && i % min == 0) {
			cout << i << endl;
			break;
		}
	}
}

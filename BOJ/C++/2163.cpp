#include <iostream>
using namespace std;

int main() {
	int n = 0, m = 0;
	cin >> n >> m;

	if (n > m) {
		cout << (n - 1) + (m - 1) * n << endl;
	}
	else {
		cout << (m - 1) + (n - 1) *m << endl;
	}
}

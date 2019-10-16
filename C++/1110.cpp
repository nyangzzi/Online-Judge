#include <iostream>
using namespace std;

int main() {
	int n = 0;
	cin >> n;

	int a = n;
	int re = 0;
	int cnt = 1;

	if (0 <= n && n <= 99) {

		re = ((a / 10) + (a % 10)) % 10;
		a = (a % 10) * 10 + re;

		while (a != n) {
			re = ((a / 10) + (a % 10)) % 10;
			a = (a % 10) * 10 + re;
			cnt++;
		}
	}

	cout << cnt << "\n";
}

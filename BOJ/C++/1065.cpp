#include <iostream>
using namespace std;

int main() {

	int N = 0;
	cin >> N;

	int a, b, c = 0;
	int cnt = 0;

	for (int i = 1; i <= N; i++) {

		if (i < 10) {
			cnt++;
		}
		else if (10 <= i && i < 100) {
			cnt++;
		}
		else {
			a = i % 10;
			b = ((i - a) % 100) / 10;
			c = (i - a - (b * 10)) / 100;

			if (c - b == b - a) {
				cnt++;
			}
		}
	}
		cout << cnt << "\n";

}

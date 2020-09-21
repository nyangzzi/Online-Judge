#include <iostream>
using namespace std;

int main() {

	int test = 0;
	cin >> test;

	while (test--) {
		int n = 0;
		cin >> n;

		bool arr[101] = {};
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j*i <= n; j++) {
				arr[i*j] = !arr[i*j];
			}
		}

		int cnt = 0;

		for (int i = 1; i <= n; i++) {
			if (arr[i]) cnt++;
		}
		cout << cnt << endl;
	}
}

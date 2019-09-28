#include <iostream>
using namespace std;

int main() {
	int c = 0;
	cin >> c;
	int arr[100000] = {};
	int t = -1;
	int a = 0;
	for (int i = 0; i < c; i++) {
		cin >> a;
		if (a == 0) {
			t--;
		}
		else {
			t++;
			arr[t] = a;
		}
	}

	int sum = 0;

	if (t == -1) cout << 0 << endl;
	else {
		for (int i = 0; i <= t; i++) {
			sum = sum + arr[i];
		}
		cout << sum << endl;
	}
}

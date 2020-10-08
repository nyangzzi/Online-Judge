#include <iostream>
using namespace std;

int main() {
	int n = 0;
	cin >> n;
	int arr[100001] = {};

	int k = 0;
	for (int i = 0; i < n; i++) {
		cin >> k;
		arr[k]++;
	}

	bool t = 0;
	for (int i = 100000; i >= 0; i--) {
		if (arr[i] == i) {
			cout << i << endl;
			t = 1;
			break;
		}
	}

	if (t == 0) {
		if (arr[0] != 0) cout << -1 << endl;
		else cout << 0 << endl;
	}
}

#include <iostream>
using namespace std;

int main() {

	int arr[10] = {};
	int n = 0, k = 0;
	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int count = 0;
	int t = 0;
	for (int i = n - 1; i >= 0; i--) {
		t = k / arr[i];
		count = count + t;
		k = k - (arr[i] * t);
		if (k == 0) break;
	}

	cout << count << endl;
}

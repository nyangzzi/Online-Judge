#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int t = 1;
	int cnt = t;

	int arr[1001] = {};
	for (int i = 1; i < 1001; i++) {
		if (cnt != 0) {
			arr[i] = t;
			cnt--;
		}
		else {
			t++;
			cnt = t;
			arr[i] = t;
			cnt--;
		}
	}

	int f = 0, e = 0;
	cin >> f >> e;

	int sum = 0;
	for (int i = f; i <= e; i++) {
		sum += arr[i];
	}
	cout << sum << endl;

}

#include <iostream>
using namespace std;

int main() {

	int k = 64;
	int x = 0;
	cin >> x;

	int arr[7] = {};
	arr[0] = 64;

	for (int i = 1; i < 7; i++) {
		arr[i] = arr[i - 1] / 2;
	}

	int cnt = 0;
	int t = 0;
	for (int i = 0; i < 7; i++) {
		if (arr[i] + t <= x) {
			t += arr[i];
			cnt++;
		}
	}

	cout << cnt << endl;
//	system("pause");
}

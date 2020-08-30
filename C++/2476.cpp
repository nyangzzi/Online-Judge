#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int test = 0;
	cin >> test;

	int max = 0;
	while (test--) {
		int arr[3] = {};
		cin >> arr[0] >> arr[1] >> arr[2];

		sort(arr, arr + 3);

		int t = 0;
		if (arr[0] == arr[1] && arr[1] == arr[2]) {
			t =  10000 + arr[0] * 1000;
		}
		else if (arr[0] == arr[1]) {
			t = 1000 + arr[1] * 100;
		}
		else if (arr[1] == arr[2]) {
			t = 1000 + arr[1] * 100;
		}
		else {
			t = arr[2] * 100;
		}

		if (t > max) {
			max = t;
		}
	}

	cout << max << endl;

}

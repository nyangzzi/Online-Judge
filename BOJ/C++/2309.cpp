#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int arr[9] = {};

	for (int i = 0; i < 9; i++) {
		cin >> arr[i];

	}

	int sum = 0;
	
	for (int i = 0; i < 9; i++) {
		sum = sum + arr[i];

	}

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			int k = sum;
			if (i == j) j++;
			k = k - arr[i] - arr[j];
			if (k == 100) {
				arr[i] = arr[j] = 0;
				sum = k;
				break;
			}
		}
		if (sum == 100) break;
	}

	sort(begin(arr), end(arr));

	for (int i = 2; i < 9; i++) {
		cout << arr[i] << endl;
	}

}

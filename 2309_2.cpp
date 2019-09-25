#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int arr[9] = {};
	int sum = 0;
	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		sum = sum + arr[i];
	}

	int t = sum - 100;

	for (int i = 0; i < 8; i++){
		for (int j = i + 1; j < 9; j++) {
			if (arr[i] + arr[j] == t) {
				arr[i] = 101;
				arr[j] = 101;
				break;
			}
		}
		if (arr[i] == 101) break;
	}

	sort(arr, arr + 9);

	for (int i = 0; i < 7; i++) {
		cout << arr[i] << endl;
	}
}

#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int arr[5] = {};

	int ave = 0;
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		ave += arr[i];
	}

	sort(arr, arr + 5);

	cout << ave / 5 << endl;
	cout << arr[2] << endl;

}

#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int arr[1000] = {};

	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr+n);

	int s = 0;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		s += arr[i];
		sum += s;
	}

	cout << sum << endl;

}

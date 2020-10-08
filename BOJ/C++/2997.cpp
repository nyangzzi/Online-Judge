#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int arr[3] = {};
	cin >> arr[0] >> arr[1] >> arr[2];

	sort(arr, arr + 3);

	int a = arr[1] - arr[0], b = arr[2] - arr[1];

	if (a == b) { cout << arr[2] + a << endl; }
	else if (a > b) { cout << arr[0] + b << endl; }
	else cout << arr[2] - a << endl;

}

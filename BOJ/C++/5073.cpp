#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	while (1) {
		int arr[3] = {};
		cin >> arr[0] >> arr[1] >> arr[2];
		sort(arr, arr + 3);
		if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0) {
			break;
		}
		else if (arr[0] + arr[1] <= arr[2]) {
			cout << "Invalid\n";
		}
		else if (arr[0] == arr[1] && arr[1] == arr[2]) {
			cout << "Equilateral\n";
		}
		else if (arr[0] == arr[1] || arr[1] == arr[2]) {
			cout << "Isosceles\n";
		}
		else {
			cout << "Scalene\n";
		}
	}
}

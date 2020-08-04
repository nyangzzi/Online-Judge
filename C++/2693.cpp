#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int test = 0;
	cin >> test;

	while (test--) {
		int arr[10] = {};
		for (int i = 0; i < 10; i++) {
			cin >> arr[i];
		}
		sort(arr, arr + 10);

		cout << arr[7] << "\n";
	}

}

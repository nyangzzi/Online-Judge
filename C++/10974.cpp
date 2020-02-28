#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int arr[8] = {};

	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++) arr[i] = i + 1;
	
	int cnt = 1;

	for (int i = n; i > 0; i--) {
		cnt *= i;
	}

	while (cnt--) {

		for (int i = 0; i < n; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
		next_permutation(arr, arr + n);
	}
	
}

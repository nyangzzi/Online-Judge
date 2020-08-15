#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	long long arr[1000000] = {};
	long long n = 0;
	cin >> n;

	for (long long i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + n, greater<long long>());

	for (long long i = 0; i < n; i++) {
		cout << arr[i] << "\n";
	}
}

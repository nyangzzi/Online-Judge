#include <iostream>
using namespace std;

int main() {
	
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	long long n = 0;
	long long arr[10001] = {};
	
	cin >> n;

	int t = 0;
	for (long long i = 0; i < n; i++) {
		cin >> t;
		arr[t]++;
	}

	for (int i = 1; i <= 10000; i++) {
		for (long long j = 0; j < arr[i]; j++) cout << i << "\n";
	}
}

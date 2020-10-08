#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int arr[1001] = {};

	int avg = 0;
	for (int i = 0; i < 10; i++) {
		int n = 0;
		cin >> n;
		
		avg += n;

		arr[n]++;
	}

	int max = 0;
	for (int i = 1; i <= 1000; i++) {
		if (arr[max] < arr[i]) {
			max = i;
		}
	}

	cout << avg / 10 << "\n" << max << "\n";
}

#include <iostream>
#include <algorithm>
using namespace std;

int arr[8] = {};

int fac(int n) {
	int cnt = 1;

	for (int i = n; i > 0; i--) {
		cnt *= i;
	}

	return cnt;

}

int sum(int n){
	int sum = 0;

	for (int i = 0; i < n-1; i++) {
		int t = 0;

		if ((arr[i] - arr[i + 1]) < 0) t = ~(arr[i] - arr[i + 1])+1;
		else t = arr[i] - arr[i + 1];

		sum += t;
	}

	return sum;
}

int main() {

	int n = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	int n_fac= fac(n);

	int max = 0;

	for (int i = 0; i < n_fac; i++) {
		next_permutation(arr, arr + n);
		
		int t = sum(n);

		if (t > max) max = t;

	}

	cout << max << endl;
}

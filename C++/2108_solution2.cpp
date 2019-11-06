//sort array로 만들어서 풀기

#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {

	int n = 0;
	cin >> n;
	short arr[500000] = {};
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr+n);
	//산술평균
	double sum = 0;
	short arr2[8001] = {};

	for (int i = 0; i < n; i++) {
		sum = sum + arr[i];
		//최빈값
		arr2[arr[i] + 4000]++;
	}
	cout << setprecision(0) << fixed;
	cout << sum / (double)n << endl;

	//중앙값
	cout << arr[n / 2 ] << endl;

	//최빈값
	int max = 0;
	for (int i = 0; i < 8001; i++) {
		if (arr2[i] > max) max = arr2[i];
	}
	
	int count = 0;
	int cc = 0;
	for (int i = 8000; i > 0; i--) {
		if (arr2[i] == max) {
			count++;
			cc = i;
		}
	}
	
	if (count == 1) {
		cout << cc-4000 << endl;
	}
	else {
		for (int i = cc + 1; i < 8001; i++) {
			if (arr2[i] == max) {
				cout << i - 4000 << endl;
				break;
			}
		}
	}


	//범위
	cout << arr[n - 1] - arr[0] << endl;
	
}

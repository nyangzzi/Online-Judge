//벡터를 이용하여 풀기

#include <iostream>
#include <array>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {

	int N = 0;
	cin >> N;
	vector<int>arr(1);
	array<int, 8001> x = {};
	
	int y = 0;
	cin >> arr[0];
	for (int i = 1; i < N; i++) {
		cin >> y;
		arr.push_back(y);
	}
	sort(arr.begin(), arr.end());

	double sum = 0;
	int max = arr[0];
	int min = arr[0];

	for (int i = 0; i < N; i++) {
		sum = sum + arr[i];
		x[arr[i] + 4000]++;
		if (max < arr[i]) {
			max = arr[i];
	}
		if (min > arr[i]) {
			max = arr[i];
		}
	}

	int most = 0;
	for (int i = 0; i < x.size(); i++) {
		if (x[i] > most) {
			most = x[i];
		}
	}
	int cnt = 0;
	vector<int>vec(1);
	for (int i = 0; i < x.size(); i++) {
		if (x[i] == most) {
			vec.push_back(i - 4000);
			cnt++;
		}
	}
	int n = 0;
	if (cnt > 1) {
		n = vec[2];
	}
	else {
		n = vec[1];
	}

	cout << setprecision(0) <<fixed;
	cout << sum / N << endl;
	cout << arr[N / 2] << endl;
	cout << n << endl;
	cout << max - min << endl;

}

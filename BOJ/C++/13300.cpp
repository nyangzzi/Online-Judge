#include <iostream>
using namespace std;

int main() {

	int n = 0, k = 0;
	cin >> n >> k;

	int arr[2][6] = {};

	for (int i = 0; i < n; i++) {
		int s = 0, y = 0;
		cin >> s >> y;
		arr[s][y - 1]++;
	}

	int cnt = 0;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 6; j++) {
			cnt += (arr[i][j] / k);
			if (arr[i][j] % k != 0) cnt++;
		}
	}

	cout << cnt << endl;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n = 0, c = 0;
	cin >> n >> c;

	bool arr[2000001] = {};

	for (int i = 0; i < n; i++) {
		int t = 0;
		cin >> t;

		int j = t;
		while (j <= c) {
			arr[j] = 1;
			j += t;
		}
	}

	int cnt = 0;
	for (int i = 1; i <= c; i++) {
		if (arr[i] == 1) {
			cnt++;
		}
	}
	cout << cnt << endl;
}

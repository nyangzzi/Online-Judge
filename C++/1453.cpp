#include <iostream>
using namespace std;

int main() {

	int n = 0;
	cin >> n;

	bool arr[101] = {};

	int cnt = 0;
	for (int i = 0; i < n; i++) {
		int t = 0;
		cin >> t;
		if (arr[t] == 1) {
			cnt++;
		}
		else {
			arr[t] = 1;
		}
	}

	cout << cnt << endl;

}

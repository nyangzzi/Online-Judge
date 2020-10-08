#include <iostream>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int cooker[5][4] = {};

	int max = 0;
	int m = 0;
	for (int i = 0; i < 5; i++) {
		int n = 0;
		for (int j = 0; j < 4; j++) {
			cin >> cooker[i][j];
			n += cooker[i][j];
		}
		if (n > max) {
			max = n;
			m = i;
		}
	}

	cout << m+1 << " " << max << endl;
}

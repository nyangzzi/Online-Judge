#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	char arr[8][8] = {};
	int cnt = 0;

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			cin >> arr[i][j];
			if (i % 2 == 0) {
				if (j % 2 == 0) {
					if (arr[i][j] == 'F') cnt++;
				}
			}
			else {
				if (j % 2 == 1) {
					if (arr[i][j] == 'F') cnt++;
				}
			}
		}
	}
	cout << cnt << endl;
}

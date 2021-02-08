#include <iostream>
using namespace std;

int main() {
	
	bool white[101][101] = {};
	int num = 0;
	cin >> num;

	while (num--) {
		int l = 0, d = 0;
		cin >> l >> d;

		for (int i = l; i < l+10; i++) {
			for (int j = 100 - d; j >90-d; j--) {
				white[j][i] = 1;
			}
		}
	}

	int cnt = 0;
	for (int i = 0; i <= 100; i++) {
		for (int j = 0; j <= 100; j++) {
			if (white[i][j] == 1) cnt++;
		}
	}

	cout << cnt << endl;
}

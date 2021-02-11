#include <iostream>
using namespace std;

int main() {
	
	bool arr[101][101] = {};

	for (int n = 0; n < 4; n++) {
		int lx = 0, ly = 0, rx = 0, ry = 0;
		cin >> lx >> ly >> rx >> ry;

		for (int i = ly; i < ry; i++) {
			for (int j = lx; j < rx; j++) {
				arr[i][j] = 1;
			}
		}
	}

	int cnt = 0;
	for (int i = 0; i < 101; i++) {
		for (int j = 0; j < 101; j++) {
			if (arr[i][j] == 1) cnt++;
		}
	}
	
	cout << cnt << endl;
}

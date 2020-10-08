#include <iostream>
using namespace std;

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int arr[9][9] = {};

	int x = 0, y = 0;
	int max = 0;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> arr[i][j];
			if (arr[x][y] < arr[i][j]) {
				x = i;
				y = j;
				max = arr[i][j];
			}
		}
	}

	cout << max << endl << x+1 << " " << y+1 << endl;
}

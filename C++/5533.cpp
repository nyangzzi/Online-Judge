#include <iostream>
using namespace std;

int main() {

	int arr[101][3] = {};
	int player[200][3] = {};

	int n = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> player[i][j];
			arr[player[i][j]][j]++;
		}
	}

	int score[200] = {};

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[player[j][i]][i] <= 1) {
				score[j] += player[j][i];
			}
		}
	}


	for (int i = 0; i < n; i++) {
		cout << score[i] << endl;
	}
}

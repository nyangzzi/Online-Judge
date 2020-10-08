#include <iostream>
#include <array>
using namespace std;

int main() {

	int T = 0;
	cin >> T;

	array<array<int,15>, 15> arr = {};

	for (int i = 0; i < T; i++) {

		int k, n = 0;
		cin >> k >> n;

		for (int j = 0; j <= k; j++) {

			for (int a = 1; a <= n; a++) {
				if (j == 0) {
					arr[0][a] = a;
				}
				else{
					arr[j][a] = arr[j][a - 1] + arr[j - 1][a];
				}

			}
		}

		cout << arr[k][n] << "\n";
	}
}

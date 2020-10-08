#include <iostream>
using namespace std;

int main() {

	int T, H, W, N = 0;

	cin >> T;

	for (int i = 0; i < T; i++) {

		cin >> H >> W >> N;
	
		if (N <= H * W) {

			if (N % H == 0) {
				N--;
				if (N / H + 1 < 10) {
					cout << N % H + 1 << "0" << N / H + 1 << "\n";
				}
				else {
					cout << N % H + 1 << N / H + 1 << "\n";
				}
			}

			else {
				if (N / H + 1 < 10) {
					cout << N % H << "0" << N / H + 1 << "\n";
				}
				else {
					cout << N % H << N / H + 1 << "\n";
				}
			}
		}

	}
}

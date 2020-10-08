#include <iostream>
using namespace std;

int main() {

	int N = 0;
	cin >> N;

	for (int i = 1; i <= N; i++) {

		for (int j = N - i; j > 0; j--) {
			cout << " ";
		}
		for (int j = i * 2 - 1; j > 0; j--) {
			if (j % 2 == 1) cout << "*";
			else cout << " ";
		}
		cout << endl;
	}
}

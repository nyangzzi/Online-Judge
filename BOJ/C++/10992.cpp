#include <iostream>
using namespace std;

int main() {

	int N = 0;
	cin >> N;

	for (int i = 0; i < N-1; i++) {
		
		for (int j = N - i - 1; j > 0; j--) {
			cout << " ";
		}
		cout << "*";
		for (int j = i * 2 - 1; j > 0; j--) {
			cout << " ";
		}
		if (i != 0) cout << "*";
		cout << endl;
	}

	for (int i = N * 2 - 1; i > 0; i--) {
		cout << "*";
	}
	cout << endl;

}

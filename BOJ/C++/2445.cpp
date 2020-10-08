#include <iostream>
using namespace std;

int main() {

	int N = 0;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		
			for (int j = i; j > 0; j--) {
				cout << "*";
			}
			for (int k = 2 * (N - i); k > 0; k--) {
				cout << " ";
			}
			for (int j = i; j > 0; j--) {
				cout << "*";
			}
		cout << endl;
	}

	for (int i = 1; i < N; i++){
		for (int j = N - i; j > 0; j--) {
			cout << "*";
		}
		for (int k = i * 2; k > 0; k--) {
			cout << " ";
		}
		for (int j = N - i; j > 0; j--) {
			cout << "*";
		}
		cout << endl;
	}
}

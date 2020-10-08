#include <iostream>
using namespace std;

int main() {

	int N = 0;
	cin >> N;

	for (int i = 1; i < N; i++) {
		for (int j = i; j > 0; j--) {
			cout << "*";
		}
		cout << endl;
	}
	for (int i = N; i > 0; i--) {
		for (int j = i; j > 0; j--) {
			cout << "*";
		}
		cout << endl;
	}
}

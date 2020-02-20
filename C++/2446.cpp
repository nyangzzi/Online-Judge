#include <iostream>
using namespace std;

int main() {

	int N = 0;
	cin >> N;

	for (int i = N; i > 0; i--) {
		for (int j = N - i; j > 0; j--) {
			cout << " ";
		}
		for (int j = i*2-1; j > 0; j--) {
			cout << "*";
		}
		cout << endl;
	}
	
	for (int i = 2; i <= N; i++) {
		for (int j = (N - i); j > 0; j--) {
			cout << " ";
		}
		for (int j = i * 2 - 1; j > 0; j--) {
			cout << "*";
		}
		cout << endl;
	}
}

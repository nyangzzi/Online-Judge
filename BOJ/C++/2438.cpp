#include <iostream>
using namespace std;

int main() {
	int N = 0;
	cin >> N;

	if (1 <= N && N <= 100) {
		for (int i = 1; i <= N; i++) {
			for (int j = 1; j <= i; j++) {
				cout << "*";
			}
			cout << endl;
		}
	}
}

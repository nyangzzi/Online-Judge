#include <iostream>
using namespace std;

int main() {
	int N = 0;
	cin >> N;

	if (N <= 100000) {
		for (int i = N; i >= 1; i--) {
			cout << i << "\n";
		}
	}
}

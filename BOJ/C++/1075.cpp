#include <iostream>
using namespace std;

int main() {

	int N, F = 0;
	cin >> N >> F;

	int a = (N / 100) * 100;
	for (size_t i = 0; i < 100; i++) {
		if ((a + i) % F == 0) {
			if (i < 10) {
				cout << "0" << i << "\n";
			}
			else {
				cout << i << "\n";
			}
			break;
		}
	}
}

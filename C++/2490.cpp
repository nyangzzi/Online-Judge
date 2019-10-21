#include <iostream>
using namespace std;

int main() {


	for (int j = 0; j < 3; j++) {

		int B = 0, D = 0;
		int in = 0;

		for (int i = 0; i < 4; i++) {
			cin >> in;
			if (in == 0) {
				B++;
			}
			else if (in == 1) {
				D++;
			}
		}

		if (B == 1 && D == 3) {
			cout << "A\n";
		}
		else if (B == 2 && D == 2) {
			cout << "B\n";
		}
		else if (B == 3 && D == 1) {
			cout << "C\n";
		}
		else if (B == 4) {
			cout << "D\n";
		}
		else if (D == 4) {
			cout << "E\n";
		}
	}
}


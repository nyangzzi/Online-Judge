#include <iostream>
using namespace std;

int A, B = 0;

int main() {

	cin >> A >> B;

	if (0 < A && A < 10 && 0 < B && B < 10) {
		cout << A + B << "\n";
	}
}

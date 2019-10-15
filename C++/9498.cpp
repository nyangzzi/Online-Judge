#include <iostream>
using namespace std;

int n = 0;

int main() {
	cin >> n;

	if (0 <= n && n <= 100) {
		if (90 <= n && n <= 100) {
			cout << "A" << endl;
		}
		else if (80 <= n && n <= 89) {
			cout << "B" << endl;
		}
		else if (70 <= n && n <= 79) {
			cout << "C" << endl;
		}
		else if (60 <= n && n <= 69) {
			cout << "D" << endl;
		}
		else {
			cout << "F" << endl;
		}
	}
}

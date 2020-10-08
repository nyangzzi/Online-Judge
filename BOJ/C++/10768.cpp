#include <iostream>
using namespace std;

int main() {

	int m = 0, d = 0;
	cin >> m >> d;

	if (m == 2 && d == 18) {
		cout << "Special\n";
	}
	else if (m == 1 || (m == 2 && d < 18)) {
		cout << "Before\n";
	}
	else {
		cout << "After\n";
	}

}

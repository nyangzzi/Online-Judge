#include <iostream>
using namespace std;

int x, y = 0;
int sum, day = 0;

int main() {

	cin >> x >> y;
	
	for (int i = 0; i < x; i++) {

		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
			day = 31;
			sum = sum + day;
		}
		else if (i == 4 || i == 6 || i == 9 || i == 11) {
			day = 30;
			sum = sum + day;
		}
		else if (i == 2) {
			day = 28;
			sum = sum + day;
		}
	}

	sum = sum + y;
	sum = sum % 7;

	if (sum == 1) {
		cout << "MON" << "\n";
	}
	else if (sum == 2) {
		cout << "TUE" << "\n";
	}
	else if (sum == 3) {
		cout << "WED" << "\n";
	}
	else if (sum == 4) {
		cout << "THU" << "\n";
	}
	else if (sum == 5) {
		cout << "FRI" << "\n";
	}
	else if (sum == 6) {
		cout << "SAT" << "\n";
	}
	else {
		cout << "SUN" << "\n";
	}
}

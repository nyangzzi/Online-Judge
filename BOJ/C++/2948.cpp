#include <iostream>
using namespace std;

int main() {
	int month = 0, day = 0;
	cin >> day >> month;

	int total = day;
	for (int i = 1; i < month; i++) {
		if (i == 2) total += 28;
		else if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) total += 31;
		else total += 30;
	}
	
	if (total % 7 == 1) cout << "Thursday" << endl;
	else if (total % 7 == 2) cout << "Friday" << endl;
	else if (total % 7 == 3) cout << "Saturday" << endl;
	else if (total % 7 == 4) cout << "Sunday" << endl;
	else if (total % 7 == 5) cout << "Monday" << endl;
	else if (total % 7 == 6) cout << "Tuesday" << endl;
	else if (total % 7 == 0) cout << "Wednesday" << endl;

}

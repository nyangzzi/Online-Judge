#include <iostream>
using namespace std;

int main() {
	
	int h = 0, m = 0;

	cin >> h >> m;
	
	if (h == 0) {
		h = 23;
		cout << h << " " << m + 15 << endl;
	}
	else {
		if (m >= 45) {
			cout << h << " " << m - 45 << endl;
		}
		else {
			cout << h - 1 << " " << m + 15 << endl;
		}
	}
}

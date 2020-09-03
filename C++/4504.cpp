#include <iostream>
using namespace std;

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n = 0;
	cin >> n;
	while (1) {
		int list = 0;
		cin >> list;

		if (list == 0) break;

		if (list % n  == 0) {
			cout << list << " is a multiple of " << n << ".\n";
		}
		else {
			cout << list << " is NOT a multiple of " << n << ".\n";
		}
	}

}

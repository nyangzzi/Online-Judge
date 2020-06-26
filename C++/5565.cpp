#include <iostream>
using namespace std;

int main() {
	
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int total = 0;
	cin >> total;

	for (int i = 0; i < 9; i++) {
		int t = 0; cin >> t;
		total -= t;
	}

	cout << total << endl;
}

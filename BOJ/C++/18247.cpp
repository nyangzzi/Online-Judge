#include <iostream>
using namespace std;

int main() {

	int t = 0;
	cin >> t; 

	for (int test = 0; test < t; test++) {

		int n = 0, m = 0;
		cin >> n >> m;

		if (n < 12) cout << -1 << endl;
		else if (m < 4) cout << -1 << endl;
		else cout << 11 * m + 4 << endl;

	}
}

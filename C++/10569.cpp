#include <iostream>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int test = 0;
	cin >> test;

	while (test--) {
		int v = 0, e = 0;
		cin >> v >> e;

		cout << 2 - v + e << "\n";
	}

}

#include <iostream>
using namespace std;

int main() {

	int test = 0;
	cin >> test;

	while (test--) {
		int n = 0, m = 0;
		cin >> n >> m;

		int u = m * 2 - n;
		int t = m - u;
		cout << u << " " << t << "\n";
	}
	
}

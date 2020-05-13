#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int test = 0;	//test case
	cin >> test;

	while (test--) {
		int r = 0, e = 0, c = 0;
		cin >> r >> e >> c;

		if (r < e - c) cout << "advertise\n";
		else if (r == e - c) cout <<"does not matter\n";
		else cout << "do not advertise\n";
	}
}

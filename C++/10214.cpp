#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int test = 0;
	cin >> test;

	while (test--) {
		int Yonsei = 0;
		int Korea = 0;

		int x = 0;
		for (int i = 0; i < 9; i++) {
			cin >> x;
			Yonsei += x;
			cin >> x;
			Korea += x;
		}
		if (Yonsei > Korea) cout << "Yonsei\n";
		else if (Yonsei == Korea) cout << "Draw\n";
		else cout << "Korea\n";

	}
}


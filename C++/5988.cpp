#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int test = 0;
	cin >> test;

	while (test--) {
		string k;
		cin >> k;

		if (k[k.size() - 1] % 2 == 0) cout << "even\n";
		else cout << "odd\n";
	}
}

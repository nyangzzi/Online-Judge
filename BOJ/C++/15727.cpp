#include <iostream>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	long long l = 0;
	cin >> l;

	if (l % 5 == 0) {
		cout << l / 5 << endl;
	}
	else {
		cout << l / 5 + 1 << endl;
	}
}

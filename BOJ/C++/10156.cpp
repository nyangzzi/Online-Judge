#include <iostream>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int k = 0, n = 0, m = 0;
	cin >> k >> n >> m;

	if (k * n > m) {
		cout << k * n - m << endl;
	}
	else {
		cout << 0 << endl;
	}
}

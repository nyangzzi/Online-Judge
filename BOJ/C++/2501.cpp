#include <iostream>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n = 0, k = 0;
	cin >> n >> k;

	int num = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			num++;
		}

		if (num == k) {
			cout << i << endl;
			break;
		}
	}
	
	if (num < k) {
		cout << 0 << endl;
	}
}

#include <iostream>
using namespace std;

int main() {

	int n = 0;
	cin >> n;

	int num = 2;

	while (num < n) {
		num = num*2;
	}

	if (num == n || n == 1) cout << 1 << endl;
	else cout << 0 << endl;
}

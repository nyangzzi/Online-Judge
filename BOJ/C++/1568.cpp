#include <iostream>
using namespace std;

int main() {

	int n = 0;
	cin >> n;

	int cnt = 0;
	int now = 1;
	while (n > 0) {
		if (now > n) now = 1;
		n -= now;
		now++;
		cnt++;
	}

	cout << cnt << endl;
	system("pause");
}

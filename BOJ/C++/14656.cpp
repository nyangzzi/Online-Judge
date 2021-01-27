#include <iostream>
using namespace std;

int main() {

	int n = 0;
	cin >> n;

	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		int s = 0;
		cin >> s;
		if (s != i) cnt++;
	}

	cout << cnt << endl;
	system("pause");
}

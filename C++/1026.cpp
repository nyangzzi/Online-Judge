#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n = 0;
	cin >> n;

	int a[50] = {};
	int b[50] = {};
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}

	sort(a, a + n);
	sort(b, b + n, greater<int>());

	int s = 0;
	for (int i = 0; i < n; i++) {
		s += (a[i] * b[i]);
	}

	cout << s << endl;
}

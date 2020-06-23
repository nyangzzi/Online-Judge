#include <iostream>
using namespace std;

int main() {
	long long s = 0, k = 0;
	cin >> s >> k;

	long long mul = 1;
	int t = s % k;
	for (int i = 0; i < k; i++) {
		if (t) {
			mul *= (s / k + 1);
			t--;
		}
		else {
			mul *= s / k;
		}
	}

	cout << mul << endl;
}

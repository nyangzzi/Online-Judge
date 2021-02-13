#include <iostream>
using namespace std;

int gcd(int a, int b) {

	if (b == 0) return a;

	return gcd(b, a % b);
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int test = 0;
	cin >> test;

	while (test--) {
		int a = 0, b = 0;
		cin >> a >> b;

		int gcdAB = gcd(a, b);
		cout << gcdAB * (a / gcdAB) * (b / gcdAB) << endl;
	}

}

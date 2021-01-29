#include <iostream>
using namespace std;

int main() {

	int c = 0, k = 0, p = 0;
	cin >> c >> k >> p;

	int sum = 0;
	for (int n = 1; n <= c; n++) {
		sum += (k * n) + (p * n * n);
	}

	cout << sum << endl;
	
}

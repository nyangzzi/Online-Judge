#include <iostream>
using namespace std;

int main() {

	long long n = 0, m = 0;
	cin >> n >> m;
	n -= m;
	if (n < 0) {
		n = 0 - n;
	}
	cout << n << endl;
	
}

#include <iostream>
using namespace std;

int main() {

	int test = 0;
	cin >> test;

	while (test--) {
		int n = 0;
		cin >> n;

		int i = 0;
		while (n > 0) {
			if (n % 2 == 1) {
				cout << i <<" ";
			}
			n /= 2;
			i++;
		}
		cout << endl;
	}
}

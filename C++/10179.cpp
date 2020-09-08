#include <iostream>
using namespace std;

int main() {

	int test = 0;
	cin >> test;

	while (test--) {
		double b = 0;
		cin >> b;

		cout.precision(2);
		cout << fixed;
		cout <<"$" << b * 0.8 << endl;
		
	}
}

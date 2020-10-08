#include <iostream>
using namespace std;

int main() {
	int test = 0;
	cin >> test;
	while (test--) {
		double a = 0, b = 0, c = 0, d = 0, e = 0;
		cin >> a >> b >> c >> d >> e;

		cout.precision(2);
		cout << fixed;

		cout << "$" << (a*350.34) + (b*230.90) + (c*190.55) + (d*125.30) + (e*180.90) << endl;
	}

}

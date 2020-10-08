#include <iostream>
using namespace std;

const double pi = 3.141592;

int main() {

	double d1 = 0, d2 = 0;
	cin >> d1 >> d2;

	cout << fixed;
	cout.precision(6);
	cout << (d1 * 2) + (2 * pi * d2) << endl;

}

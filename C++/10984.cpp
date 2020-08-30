#include <iostream>
using namespace std;

int main() {

	int test = 0;
	cin >> test;

	while (test--) {
		int n = 0;
		cin >> n;

		double gpa= 0;
		int num = 0;
		for (int i = 0; i < n; i++) {
			int c = 0;
			double g = 0;
			cin >> c >> g;
			num += c;
			gpa += (c*g);
		}
		cout.precision(1);
		cout << fixed;
		cout << num << " " << gpa/num << endl;
	}

}

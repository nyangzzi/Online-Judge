#include <iostream>
using namespace std;

int main() {

	int n = 0;
	cin >> n;

	int q1 = 0, q2 = 0, q3 = 0, q4 = 0, axis = 0;
	
	while (n--) {
		int a = 0, b = 0;
		cin >> a >> b;
		if (a == 0 || b == 0) axis++;
		else if (a > 0 && b > 0) q1++;
		else if (a < 0 && b > 0) q2++;
		else if (a < 0 && b < 0) q3++;
		else if (a > 0 && b < 0) q4++;
	}

	cout << "Q1: " << q1 << endl;
	cout << "Q2: " << q2 << endl;
	cout << "Q3: " << q3 << endl;
	cout << "Q4: " << q4 << endl;
	cout << "AXIS: " << axis << endl;

}

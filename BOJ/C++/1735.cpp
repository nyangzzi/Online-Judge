#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if (b == 0) return a;
	else return gcd(b, a %b);
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int fa = 0, fb = 0;
	int sa = 0, sb = 0;

	cin >> fa >> fb >> sa >> sb;

	int a = fa * sb + fb * sa;
	int b = fb * sb;

	int gcdAB = gcd(a, b);

	cout << a / gcdAB << " " << b / gcdAB << endl;
	
}

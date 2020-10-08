#include <iostream>
using namespace std;

int main() {

	int a = 0, b = 0, v = 0;
	cin >> a >> b >> v;
	
	int d = a - b, e = v - a;
	int n = e/d;
	while (d*n < e) {
		n++;
	}
	cout << n + 1 << endl;
}

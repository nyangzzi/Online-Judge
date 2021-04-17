#include <iostream>
using namespace std;

int rev(int x) {
	int y = 0;
	while (x > 0) {
		y *= 10;
		y += x % 10;
		x /= 10;
	}
	return y;
}

int main() {
	
	int x = 0, y = 0;
	cin >> x >> y;
	cout << rev(rev(x) + rev(y)) << endl;
	
}

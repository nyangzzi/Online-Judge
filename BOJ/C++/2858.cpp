#include <iostream>
using namespace std;

int main() {
	
	int r = 0, b = 0;
	cin >> r >> b;
	r = (r - 4) / 2;

	for (int w = 1; w <= r-w; w++) {
		int l = r - w;
		if (l*w == b) cout << l+2 << " " << w+2 << endl;
	}
}

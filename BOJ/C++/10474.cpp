#include <iostream>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	while (1) {
		int x = 0, y = 0;
		cin >> x >> y;
		if (x == 0 && y == 0) {
			break;
		}
		else {
			cout << x / y << " " << x % y << " / " << y << "\n";
		}
	}
}

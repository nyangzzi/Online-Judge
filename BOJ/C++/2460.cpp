#include <iostream>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int max = 0;
	int now = 0;
	for (int i = 0; i < 10; i++) {
		int a = 0, b = 0;
		cin >> a >> b;
		now = now - a + b;
		if (now > max) {
			max = now;
		}
	}
	cout << max << endl;

}

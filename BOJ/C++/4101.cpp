#include <iostream>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	while (1) {
		int a = 0, b = 0;
		cin >> a >> b;
		if (a == 0 && b == 0) {
			break;
		}
		else {
			if (a > b) {
				cout << "Yes\n";
			}
			else {
				cout << "No\n";
			}
		}
	}
}

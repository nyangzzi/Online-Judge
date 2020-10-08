#include <iostream>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int n = 0;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		if (i % 2 == 1) {
			for (int j = 0; j < n; j++) {
				cout << "* ";
			}
			cout << endl;
		}
		else {
			for (int j = 1; j <= n; j++) {
				cout << " *";
			}
			cout << endl;
		}
	}
}

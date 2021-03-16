#include <iostream>
using namespace std;

int main(){

	int n = 0;
	cin >> n;

	while (n--) {
		int u = 0;
		cin >> u;

		for (int i = 1; i <= u; i++) {
			for (int j = 1; j <= u; j++) {
				if (i == 1 || i == u || j == 1 || j == u) {
					cout << "#";
				}
				else {
					cout << "J";
				}
			}
			cout << endl;
		}
		cout << endl;
	}

}

#include <iostream>
#include <string>
using namespace std;

int main() {

	int n = 0, m = 0;
	string bread[10] = {};
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> bread[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = m - 1; j >= 0; j--) {
			cout << bread[i][j];
		}
		cout << endl;
	}
	system("pause");
}

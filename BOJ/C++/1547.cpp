#include <iostream>
using namespace std;

int main() {

	bool arr[4] = {};
	arr[1] = 1;

	int m = 0;
	cin >> m;

	while (m--) {
		
		int i = 0, j = 0;
		cin >> i >> j;
		
		bool p = arr[i];
		arr[i] = arr[j];
		arr[j] = p;
	}
	
	if (arr[1] == 1) {
		cout << 1 << endl;
	}
	else if (arr[2] == 1) {
		cout << 2 << endl;
	}
	else if (arr[3] == 1) {
		cout << 3 << endl;
	}
	else {
		cout << -1 << endl;
	}

}

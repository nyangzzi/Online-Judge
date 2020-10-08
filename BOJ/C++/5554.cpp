#include <iostream>
using namespace std;

int main() {

	int sec = 0;

	for (int i = 0; i < 4; i++) {
		int n = 0;
		cin >> n;
		sec += n;
	}

	cout << sec / 60 << "\n" << sec % 60 << "\n";
}

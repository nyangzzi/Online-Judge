#include <iostream>
#include <array>
using namespace std;

int main() {
	
	int up = 1;
	int down = 1;
	array<int, 8> arr = {};

	for (int i = 0; i < 8; i++) {
		cin >> arr[i];
}

	for (int i = 0; i < 7; i++) {

		if (arr[i] == arr[i + 1] - 1) {
			up++;
		}
		else if (arr[i] == arr[i + 1] + 1) {
			down++;
		}
	}

	if (up == 8) {
		cout << "ascending\n";
	}
	else if (down == 8) {
		cout << "descending\n";
	}
	else {
		cout << "mixed\n";
	}
}
